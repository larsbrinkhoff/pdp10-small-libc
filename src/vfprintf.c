#include <stdio.h>
#include <stdarg.h>
#include <string.h>

static void
output (void *ptr, int c)
{
  fputc (c, ptr);
}

int
vfprintf (FILE *f, const char *format, va_list ap)
{
  extern int _vxprintf (void (*) (void *, int), void *, const char *, va_list);
  return _vxprintf (output, f, format, ap);
}
