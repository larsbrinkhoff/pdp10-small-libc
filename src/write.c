#include <unistd.h>
#include <errno.h>
#include "fd.h"
#include "monsym.h"

asm ("SEARCH MONSYM");

ssize_t
write (int fd, const void *ptr, size_t n)
{
  register int		ac1 asm ("1") = _fds[fd].jfn;
  register const void *	ac2 asm ("2") = ptr - 1;
  register int		ac3 asm ("3") = -n;

  asm ("SOUT\n\t"
       " ERJMPR .+2\n\t"
       "MOVEI %0,0"
       : "=r" (ac1), "=r" (ac2), "=r" (ac3)
       : "0" (ac1), "1" (ac2), "2" (ac3));
  n += ac3;

  if (ac1 == 0)
    return n;

  switch (ac1)
    {
    case DESX1:
    case DESX3:
      errno = EINVAL;
      break;
    case DESX5:
      errno = EBADF;
      break;
    case IOX11:
      errno = EDQUOT;
      break;
    default:
      errno = EIO;
      break;
    }
  return -1;
}
