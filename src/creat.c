#include <fcntl.h>
#include <unistd.h>

int
creat (const char *name, mode_t mode)
{
  return open (name, O_WRONLY | O_TRUNC | O_CREAT, mode);
}
