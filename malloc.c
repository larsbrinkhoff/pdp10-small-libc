#include <stdlib.h>

extern char _heap[1];

void *
malloc (size_t n)
{
  static char *mem = _heap;
  void *r;

  r = mem;
  mem += (n + 3) & ~3;
  return r;
}
