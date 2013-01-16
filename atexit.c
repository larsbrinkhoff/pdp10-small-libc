#include <errno.h>
#include <stdlib.h>

typedef void (*F) (void);
extern F _atexit_fn[10];

int
atexit (void (*function) (void))
{
  int i;

  for (i = 0; i < 10; i++)
    if (_atexit_fn[i] == 0)
      {
	_atexit_fn[i] = function;
	return 0;
      }

  errno = ENOMEM;
  return -1;
}
