#include <stdio.h>
#include <unistd.h>

int
fputc (int c, FILE *f)
{
  unsigned char ch = c;
  int r;

  if (feof (f) || ferror (f))
    return EOF;

  if (ch == '\n' && f->flags & _STDIO_TEXT)
    {
      char cr = '\r';

      r = write (f->fd, &cr, 1);
      if (r == 0)
	{
	  f->flags |= _STDIO_EOF;
	  return EOF;
	}
      else if (r < 0)
	{
	  f->flags |= _STDIO_ERROR;
	  return EOF;
	}
    }

  r = write (f->fd, &ch, 1);
  if (r == 0)
    {
      f->flags |= _STDIO_EOF;
      return EOF;
    }
  else if (r < 0)
    {
      f->flags |= _STDIO_ERROR;
      return EOF;
    }

  return ch;
}
