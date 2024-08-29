/***************************************************************************************
Create and run Kernigham and Ritchie's famous "hello, world" program:

#include <stdio.h>
int main (void)
{
  printf("hello, world\n");
}

Do you get a warning message from the compiler? If so, what's needed to make it go away?
***************************************************************************************/


// No, not in "cc (GCC) 14.2.1 20240801 (Red Hat 14.2.1-1)".

// If so, then returning 0 should fix it.
#include <stdio.h>

int main(void) {
  printf("hello, world\n");
  return 0;
}
