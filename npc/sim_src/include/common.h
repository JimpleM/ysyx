#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <stdlib.h>

#ifdef ISA64
typedef uint64_t word_t;
typedef int64_t sword_t;
typedef uint64_t paddr_t;
#else
typedef uint32_t word_t;
typedef uint32_t paddr_t;
typedef int32_t sword_t;
#endif


#endif