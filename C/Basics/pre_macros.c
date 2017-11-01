//ANSI C defines a number of macros. Although each one is available for use
// in programming, the predefined macros should not be directly modified.
#include <stdio.h>

int main() {

   printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );
	return 0;
}
