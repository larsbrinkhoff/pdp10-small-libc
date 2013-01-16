#include <string.h>

char *
strncat (char *d, const char *s, size_t n)
{
  char *result = d;

  while (*d)
    d++;

  while (n-- > 0 && (*d++ = *s++) != 0)
    ;

  return result;
}
