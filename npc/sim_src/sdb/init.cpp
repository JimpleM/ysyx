#include "init.h"

#include <getopt.h>

static char *img_file = NULL;
static char *diff_so_file = NULL;
static int difftest_port = 1234;

extern uint8_t pmem [PMEM_SIZE];

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"img"      , required_argument, NULL, 'i'},
    {"diff"     , required_argument, NULL, 'd'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, ":i:d", table, NULL)) != -1) {
    switch (o) {
      case 'd': diff_so_file = optarg; break;
      case 'i': img_file = optarg; break;
      case 1 : img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_npc(int argc, char *argv[]) {
    parse_args(argc, argv);

    long img_size = load_img();

    init_difftest(diff_so_file, img_size, difftest_port);
    
}