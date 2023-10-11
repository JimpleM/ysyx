#ifndef __COMMON_H__
#define __COMMON_H__

#ifdef ISA64
typedef uint64_t word_t
typedef int64_t sword_t
#else
typedef uint32_t word_t
typedef int32_t sword_t
#endif

#define PG_ALIGN __attribute((aligned(4096)))

#endif