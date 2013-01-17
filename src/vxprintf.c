#include <stdio.h>
#include <stdarg.h>
#include <string.h>

static int
pd (void (*output) (void *, int), void *state, unsigned x)
{
  const char *s = "0123456789";
  int n;

  if (x == 0)
    return 0;

  n = pd (output, state, x / 10U);
  output (state, s[x % 10U]);
  return n + 1;
}

static int
printd (void (*output) (void *, int), void *state, int x)
{
  int n = 0;

  if (x == 0)
    {
      output (state, '0');
      return 1;
    }

  if (x < 0)
    {
      output (state, '-');
      x = -x;
      n++;
    }

  return n + pd (output, state, x);
}

static int
printo (void (*output) (void *, int), void *state, int x)
{
  int i, n = 0;
  for (i = 0; i < 12; i++)
    {
      char *s = "01234567";
      output (state, s[(x >> 33) & 7]);
      n++;
      x <<= 3;
    }
  return n;
}

static int
printx (void (*output) (void *, int), void *state, unsigned x)
{
  int i, n = 0;
  for (i = 0; i < 12; i++)
    {
      char *s = "0123456789abcdef";
      output (state, s[(x >> 32) & 0xf]);
      n++;
      x <<= 4;
    }
  return n;
}

static void
prints (void (*output) (void *, int), void *state, const char *s)
{
  while (*s)
    output (state, *s++);
}

int
_vxprintf (void (*output) (void *, int), void *state, const char *format, va_list ap)
{
  int n = 0;

  for (; *format; format++)
    {
      if (*format != '%')
	output (state, *format);
      else
	{
	  int l = 0;
	  int x;

	  for (format++; ; format++)
	    switch (*format)
	      {
	      case '%':
		output (state, '%');
		goto done;
	      case 'c':
		x = va_arg (ap, int);
		output (state, x);
		n++;
		goto done;
	      case 'l':
		l++;
		break;
	      case 's':
		{
		  char *s = va_arg (ap, char *);
		  prints (output, state, s);
		  n += strlen (s);
		  goto done;
		}
	      case 'o':
	      case 'p':
		if (l < 2)
		  x = va_arg (ap, int);
		else
		  x = va_arg (ap, long long);
		n += printo (output, state, x);
		goto done;
	      case 'x':
		x = va_arg (ap, int);
		n += printx (output, state, x);
		goto done;
	      case 'd':
		x = va_arg (ap, int);
		n += printd (output, state, x);
		goto done;
	      case 'u':
		x = va_arg (ap, int);
		if (x != 0)
		  n += pd (output, state, x);
		else
		  {
		    output (state, '0');
		    n++;
		  }
		goto done;
	      case 'X':
	      case 'f':
	      case 'g':
		prints (output, state, "<something>");
		n += 11;
		goto done;
	      }
	done:
	  ;
	}
    }

  return n;
}
