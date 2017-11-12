// A simplifed version of the unix program cp, which copies once file to another. 
// This version of cp copies only one file, it does not permit the second argument to be a diectory
// and it invents permissions instead of copying them
#include<sys/types.h>
#include<sys/uio.h>
#include<unistd.h>
#include<stdio.h>



//error handling
void die(const char *s) {
	//clear the screen at exit
	write(STDOUT_FILENO, "\x1b[2J", 4);
 	write(STDOUT_FILENO, "\x1b[H", 3);
	//prints a descriptive error message to stderr.
  	perror(s);
  	//After printing out the error message, we exit the program with an exit status of 1, 
  	//which indicates failure (as would any non-zero value).

  	exit(1);
}

int main(){

	int x = getchar_();
	printf("%c\n", x);

	return 0;
}
