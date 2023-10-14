#ifndef __MACRO_H__
#define __MACRO_H__


#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

#if !defined(likely)
#define likely(cond)   __builtin_expect(cond, 1)
#define unlikely(cond) __builtin_expect(cond, 0)
#endif


#endif
