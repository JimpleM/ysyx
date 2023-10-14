#ifndef __CONFIG_H__
#define __CONFIG_H__

#define DIFFTEST 1

#define PMEM_LEFT  0x80000000
#define PMEM_RIGHT 0x8fffffff
#define PMEM_SIZE   PMEM_RIGHT-PMEM_LEFT+1

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

#define CONFIG_ITRACE
// #define CONFIG_FTRACE
// #define CONFIG_MTRACE

#endif