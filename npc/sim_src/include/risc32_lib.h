#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


#include "common.h"
#include "debug.h"
#include "Vriscv32.h"
#include "Vriscv32__Dpi.h"


#define PMEM_LEFT  0x80000000
#define PMEM_RIGHT 0x8fffffff
#define PMEM_SIZE   PMEM_RIGHT-PMEM_LEFT+1
#define RESET_VECTOR PMEM_LEFT

void init_npc(int argc, char *argv[]);

static uint32_t pmem_read(int addr, int len);
static void pmem_write(int addr, int data, int len);