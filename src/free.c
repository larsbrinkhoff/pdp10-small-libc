#include <stdlib.h>

void
free (void *p)
{
  realloc (p, 0);
}
