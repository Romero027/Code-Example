#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main (int argc, char **argv)
{
  index;
  int c;

  //opterr = 0;

  while ((c = getopt (argc, argv, "ab")) != -1)
    switch (c)
      {
      case 'a':
        printf("You entered a\n");
        break;
      case 'b':
        printf("You entered b\n");
        break;
      case '?':
         printf("Wrong option\n");
      	return 1;
      default:
        printf("Wrong option\n");
        return 1;
      }
      //getopt will be 0 if the user doesn't supply an option
      printf("optopt is : %d\n",optopt);
// 
//   printf ("aflag = %d, bflag = %d, cvalue = %s\n",
//           aflag, bflag, cvalue);
// 
//   for (index = optind; index < argc; index++)
//     printf ("Non-option argument %s\n", argv[index]);
  return 0;
}
