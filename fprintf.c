#include <stdarg.h>
#include <stdio.h>

int
fprintf (FILE *f, const char *format, ...)
{
  va_list ap;
  int result;

  va_start (ap, format);
  result = vfprintf (f, format, ap);
  va_end (ap);
  return result;
}
