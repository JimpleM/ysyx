#ifndef __CONFIG_H__
#define __CONFIG_H__


// MROM address
#define PMEM_LEFT  0x20000000
#define PMEM_RIGHT 0x20000fff
#define PMEM_SIZE   PMEM_RIGHT-PMEM_LEFT+1

// #define CONFIG_MTRACE_START_ADDR    0x80000000
// #define CONFIG_MTRACE_END_ADDR      0x8fffffff

#define CONFIG_DIFFTEST
// #define CONFIG_ITRACE
// #define CONFIG_FTRACE
// #define CONFIG_WATCHPOINT
// #define CONFIG_MTRACE
// #define CONFIG_DTRACE

// #define CONFIG_VGA

#define CONFIG_WAVE

#ifdef CONFIG_WAVE
    #define CONFIG_WAVE_PC_BEGIN    0x20000000
    #define CONFIG_WAVE_PC_END      0x8000FFFF
#endif

#endif
