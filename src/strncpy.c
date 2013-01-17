#include <string.h>

char *
strncpy (char *d, const char *s, size_t n)
{
  char *start = d;

#if 1
  for (; n > 0 && *s != 0; n--)
    *d++ = *s++;
  for (; n > 0; n--)
    *d++ = 0;
#else
  while (n-- > 0 && *s)
    *d++ = *s++;
  while (n-- > 0)
    *d++ = 0;
#endif

  return start;
}
