#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "debug.h"
#include "Vriscv32__Dpi.h"


#define PMEM_LEFT  0x80000000
#define PMEM_RIGHT 0x8fffffff
#define PMEM_SIZE   PMEM_RIGHT-PMEM_LEFT+1
#define RESET_VECTOR PMEM_LEFT

void init_npc(int argc, char *argv[]);