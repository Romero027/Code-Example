//Source:http://www.cplusplus.com/reference/cstdlib/atexit/
//See man 3 at exit for more detail

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
  //The atexit funciton registers the given function to be called at program exit,
  //wether via exit or via return from the program's main(). Functions so registered are 
  //called in reverse order; no argument are passed
  atexit (fnExit1);
  atexit (fnExit2);
  puts ("Main function.");
  return 0;
}
