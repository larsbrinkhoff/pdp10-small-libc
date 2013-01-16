#include <string.h>

char *
strcpy (char *d, const char *s)
{
  char *start = d;

  while ((*d++ = *s++) != 0)
    ;

  return start;
}
