#undef NDEBUG
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ringbuffer.h>

// off_t size = 4096;
// int fd;
#define COUNT_MAX 32
typedef struct {
    char buffer[64];
} Buffer;

Buffer ringbuff[COUNT_MAX+1];
static int count;

void init_buffer(){
    count = 0;
    return ;
}

int write_buffer(char *data, int length){
    strncpy(ringbuff[count++].buffer,data,length);
    count = (count == COUNT_MAX) ? 0 : count;
    return 0;
}


void show_all_iringbuf(){
    printf("--------------------- iringbuf start ---------------------\n");
    for(int i=0; i<COUNT_MAX; i++){
        if(i == COUNT_MAX-1){
            printf("  ->");
        }else{
            printf("    ");
        }
        ++count;
        count = (count == COUNT_MAX) ? 0 : count;
        printf("%s\n",ringbuff[count].buffer);
        
    }
    printf("--------------------- iringbuf end ----------------------\n");
}

RingBuffer *RingBuffer_create(int length)
{   
    // fd = -1;
    // if ((fd = open("/dev/zero", O_RDWR, 0)) == -1){
    //     return NULL;
    // }
    RingBuffer *buffer = calloc(1, sizeof(RingBuffer));
    // RingBuffer *buffer = mmap(NULL,size,PROT_READ|PROT_WRITE,MAP_PRIVATE,fd,0);
    buffer->length  = length + 1;
    buffer->start = 0;
    buffer->end = 0;
    buffer->buffer = calloc(buffer->length, 1);
    // buffer->buffer = (char*) mmap(NULL,size,PROT_READ|PROT_WRITE,MAP_PRIVATE,fd,0);
    // if(buffer->buffer == MAP_FAILED){
    //     return NULL;
    // }
    return buffer;
}

void RingBuffer_destroy(RingBuffer *buffer)
{
    if(buffer) {
        free(buffer->buffer);
        free(buffer);
    }
    // munmap(buffer,size);
    // close(fd);
    return ;
}

int RingBuffer_write(RingBuffer *buffer, char *data, int length)
{
    // if(RingBuffer_available_data(buffer) == 0) {
    //     buffer->start = buffer->end = 0;
    // }
    if(buffer->end + length >= buffer->length-1){
        buffer->end = 0;
    }

    // check(length <= RingBuffer_available_space(buffer),
    //         "Not enough space: %d request, %d available",
    //         RingBuffer_available_data(buffer), length);

    void *result = memcpy(RingBuffer_ends_at(buffer), data, length);
    assert(result != NULL);
    // check(result != NULL, "Failed to write data into buffer.");

    RingBuffer_commit_write(buffer, length);

    return length;
// error:
//     return -1;
}

int RingBuffer_read(RingBuffer *buffer, char *target, int amount)
{
    if(buffer->start + amount >= buffer->length-1){
        buffer->start = 0;
    }
    // check_debug(amount <= RingBuffer_available_data(buffer),
    //         "Not enough in the buffer: has %d, needs %d",
    //         RingBuffer_available_data(buffer), amount);

    void *result = memcpy(target, RingBuffer_starts_at(buffer), amount);
    // check(result != NULL, "Failed to write buffer into data.");
    assert(result != NULL);
    RingBuffer_commit_read(buffer, amount);

    // if(buffer->end == buffer->start) {
    //     buffer->start = buffer->end = 0;
    // }

    return amount;
// error:
//     return -1;
}

bstring RingBuffer_gets(RingBuffer *buffer, int amount)
{   
    // check(amount > 0, "Need more than 0 for gets, you gave: %d ", amount);
    // check_debug(amount <= RingBuffer_available_data(buffer),
    //         "Not enough in the buffer.");

    bstring result = blk2bstr(RingBuffer_starts_at(buffer), amount);
    // check(result != NULL, "Failed to create gets result.");
    // check(blength(result) == amount, "Wrong result length.");
    assert(result != NULL);
    RingBuffer_commit_read(buffer, amount);
    assert(RingBuffer_available_data(buffer) >= 0 && "Error in read commit.");

    return result;
// error:
//     return NULL;
}