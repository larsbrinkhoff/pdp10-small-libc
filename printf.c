#include <stdarg.h>
#include <stdio.h>

int
printf (const char *format, ...)
{
  va_list ap;
  int result;

  va_start (ap, format);
  result = vfprintf (stdout, format, ap);
  va_end (ap);
  return result;
}
