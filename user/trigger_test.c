#include "kernel/types.h"
#include "user/user.h"
#include "kernel/custom_logger.h"

int main(int argc, char *argv[])
{
  trigger();
  exit(0);
}
