#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern size_t ramdisk_write(const void *buf, size_t offset, size_t len);
extern size_t get_ramdisk_size();

extern size_t serial_write(const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t file_offset;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}
int fs_open(const char *pathname, int flags, int mode){
  assert(pathname != NULL);
  for(int i=0;i<LENGTH(file_table);i++){
    if(strcmp(pathname,file_table[i].name) == 0){
      return i;
    }
  }
  Log("[fs_open] not found pathname: %s",pathname);
  assert(0);
  return 0;
}

size_t fs_read(int fd, void *buf, size_t len){
  if(fd < 3){
    return file_table[fd].read(buf,0,len);
  }
  size_t read_len = len;
  if(file_table[fd].file_offset + len> file_table[fd].size){
    read_len = file_table[fd].size - file_table[fd].file_offset;
  }
  ramdisk_read((void *)buf,file_table[fd].disk_offset+file_table[fd].file_offset,read_len);
  file_table[fd].file_offset+= read_len;
  return read_len;
}

size_t fs_write(int fd, const void *buf, size_t len){
  if(fd < 3){
    return file_table[fd].write(buf,0,len);
  }
  assert(file_table[fd].file_offset + len <= file_table[fd].size);
  ramdisk_write((void *)buf,file_table[fd].disk_offset+file_table[fd].file_offset,len);
  file_table[fd].file_offset+= len;
  return len;
}

size_t fs_lseek(int fd, size_t offset, int whence){
  assert(offset <= file_table[fd].size);
  switch(whence){
    case SEEK_SET:
      file_table[fd].file_offset = offset;
      break;
    case SEEK_CUR:
      assert(file_table[fd].file_offset + offset <= file_table[fd].size);
      file_table[fd].file_offset += offset;
      break;
    case SEEK_END:
      file_table[fd].file_offset =  file_table[fd].size;
      break;
    default: 
      Log("[fs_lseek] wrong whence");
      assert(0);
      break;
  }
  return file_table[fd].file_offset;
}

int fs_close(int fd){
  file_table[fd].file_offset = 0;
  return 0;
}

char *fs_fdname(int fd){
  return file_table[fd].name;
}