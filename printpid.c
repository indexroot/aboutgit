#include "apue.h"
#include "apueerror.h"

int main(void)
{
  printf("Hello World from process ID %ld\n", (long) getpid() );
}
