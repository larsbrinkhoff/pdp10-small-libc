#include <stdlib.h>

#undef alloca

void *
alloca (size_t n)
{
  abort ();
}
