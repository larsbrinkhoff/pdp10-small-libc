#include <stdlib.h>
#include <string.h>

void *
calloc (size_t n, size_t m)
{
  void *p = realloc (NULL, n * m);
  memset (p, 0, n * m);
  return p;
}
