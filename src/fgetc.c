#include <stdio.h>
#include <unistd.h>

int
fgetc (FILE *f)
{
  unsigned char ch;
  ssize_t r;

  if (f->ungetc_buf != EOF)
    {
      ch = f->ungetc_buf;
      f->ungetc_buf = EOF;
    }
  else
    {
      r = read (f->fd, &ch, 1);
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

  if (ch == '\r' && f->flags & _STDIO_TEXT)
    ch = fgetc (f);

  return ch;
}
