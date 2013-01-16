#include <string.h>

int
memcmp (const void *p1, const void *p2, size_t n)
{
  const char *s1 = p1, *s2 = p2;

  while (n > 0 && *s1 == *s2)
    n--, s1++, s2++;
  return n == 0 ? 0 : (int)*s1 - (int)*s2;
}
