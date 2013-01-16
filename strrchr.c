#include <string.h>

char *
strrchr (const char *s, int c)
{
  const char *p = s;

  while (*p)
    p++;

  while (p != s)
    {
      if (c == *p)
	return (char *)p;
      p--;
    }

  return NULL;
}

