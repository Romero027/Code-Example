//Source:GeekforGeeks
//exit perform normal program termination
//see man 3 exit for more details



/* exit example */
#include <stdio.h>
#include <stdlib.h>
  
int main ()
{
  FILE * pFile;
  pFile = fopen ("myfile.txt", "r");
  if (pFile == NULL)
  {
    printf ("Error opening file\n");
    exit (1);
  }
  else
  {
    /* file operations here */
  }
  return 0;
}
