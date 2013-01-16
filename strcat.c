#include <string.h>

char *
strcat (char *d, const char *s)
{
  char *result = d;

  while (*d)
    d++;

  while ((*d++ = *s++) != 0)
    ;

  return result;
}
