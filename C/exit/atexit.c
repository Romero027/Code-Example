//Source:http://www.cplusplus.com/reference/cstdlib/atexit/


/* atexit example */
#include <stdio.h>      /* puts */
#include <stdlib.h>     /* atexit */

void fnExit1 (void)
{
  puts ("Exit function 1.");
}

void fnExit2 (void)
{
  puts ("Exit function 2.");
}

int main ()
{
  atexit (fnExit1);
  atexit (fnExit2);
  puts ("Main function.");
  return 0;
}
