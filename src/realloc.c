#include <stdlib.h>
#include <string.h>

void *
realloc (void *p, size_t n)
{
  void *r;

  if (n == 0)
    {
      free (p);
      return NULL;
    }

  r = malloc (n);
  if (r == NULL)
    return NULL;

  if (p)
    memcpy (r, p, n);

  return r;
}
