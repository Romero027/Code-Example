#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main (int argc, char **argv)
{
 //  int aflag = 0;
//   int bflag = 0;
//   char *cvalue = NULL;
//   int index;
  int c;

  //opterr = 0;

  while ((c = getopt (argc, argv, "abc:")) != -1)
    switch (c)
      {
      case 'a':
        printf("You entered a");
        break;
      case 'b':
        printf("You entered b");
        break;
      default:
        printf("This is not!!");
        return 1;
      }
// 
//   printf ("aflag = %d, bflag = %d, cvalue = %s\n",
//           aflag, bflag, cvalue);
// 
//   for (index = optind; index < argc; index++)
//     printf ("Non-option argument %s\n", argv[index]);
  return 0;
}