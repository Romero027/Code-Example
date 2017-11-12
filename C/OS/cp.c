// A simplifed version of the unix program cp, which copies once file to another. 
// This version of cp copies only one file, it does not permit the second argument to be a diectory
// and it invents permissions instead of copying them
#include<sys/types.h>
#include<sys/uio.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>


//error handling
void die(const char *s) {
	//clear the screen at exit(not useful in this case)
	//https://viewsourcecode.org/snaptoken/kilo/03.rawInputAndOutput.html
	//write(0, "\x1b[2J", 4);
 	//write(0, "\x1b[H", 3);
	//prints a descriptive error message to stderr.
  	//perror(s);
  	printf("%s\n",s);
  	//After printing out the error message, we exit the program with an exit status of 1, 
  	//which indicates failure (as would any non-zero value).
  	exit(1);
}

/* cp: copy f1 to f2 */

int main(int argc, char *argv[]){

	int f1,f2,n;
	//The value of BUFSIZ is chosen on each system so as to make stream I/O efficient.(found in stdio.h)
	//At least 256 
	char buf[BUFSIZ];

	if(argc!=3)
		die("Usage: <input file> <output file>\n");



	return 0;
}
