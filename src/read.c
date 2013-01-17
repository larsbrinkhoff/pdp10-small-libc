#include <unistd.h>
#include "fd.h"

asm ("SEARCH MONSYM");

ssize_t
read (int fd, void *ptr, size_t n)
{
  register int	  ac1 asm ("1") = _fds[fd].jfn;
  register void * ac2 asm ("2") = ptr;
  register int    ac3 asm ("3") = -n;

  asm ("SIN"
       : "=r" (ac1), "=r" (ac2), "=r" (ac3)
       : "0" (ac1), "1" (ac2), "2" (ac3));
  n += ac3;

  return n;
}
