#include <unistd.h>

asm ("SEARCH MONSYM");

void
_exit (int code)
{
  register int ac1 asm ("1") = code;
  for (;;)
    asm ("HALTF"
	 :
	 : "r" (ac1));
}
