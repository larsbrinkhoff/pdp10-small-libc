#include <string.h>

char *
strpbrk (const char *s, const char *t)
{
  while (*s)
    {
      if (strchr (t, *s))
	return (char *)s;
      else
	s++;
    }

  return NULL;
}
