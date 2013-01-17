#include <stdio.h>

size_t
fwrite (const void *ptr, size_t size, size_t n, FILE *f)
{
  const char *p;
  size_t i;

  p = ptr - 1;
  for (i = 0; i < n * size; i++)
    if (fputc (*++p, f) == EOF)
      break;

  return i / size;
}
