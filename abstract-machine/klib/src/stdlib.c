#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;



int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

// #define MEMORY_POOL_SIZE 1024*1024

// char memory_pool[MEMORY_POOL_SIZE];

// char *memory_heep = memory_pool;
// void *malloc(size_t size) {
//   // On native, malloc() will be called during initializaion of C runtime.
//   // Therefore do not call panic() here, else it will yield a dead recursion:
//   //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
// #if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
//   if(memory_heep - memory_pool + size > MEMORY_POOL_SIZE){
//     assert(0);
//     return NULL;
//   }
//   void *ptr = (void *)memory_heep;
//   memory_heep += size;
//   return ptr;

// #endif
//   return NULL;
// }
char *memory_heep = NULL;
void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  if(memory_heep == NULL){
    memory_heep = (void *)ROUNDUP(heap.start, 8);
  }
  size  = (size_t)ROUNDUP(size, 8);
  char *memory_heep_old = memory_heep;
  memory_heep += size;
  assert((uintptr_t)heap.start <= (uintptr_t)memory_heep && (uintptr_t)memory_heep < (uintptr_t)heap.end);
  for (uint64_t *p = (uint64_t *)memory_heep_old; p != (uint64_t *)memory_heep; p ++) {
    *p = 0;
  }
  return memory_heep_old;
#endif
  return NULL;
}

void free(void *ptr) {
}

#endif
