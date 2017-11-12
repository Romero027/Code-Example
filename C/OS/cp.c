// A simplifed version of the unix program cp, which copies once file to another. 
// This version of cp copies only one file, it does not permit the second argument to be a diectory
// and it invents permissions instead of copying them
#include<sys/types.h>
#include<sys/uio.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include <fcntl.h>

#define PERMS 0666 /**RW for owner, group, others*/

//error handling
void die(const char *s,...) {
	//clear the screen at exit(not useful in this case)
	//https://viewsourcecode.org/snaptoken/kilo/03.rawInputAndOutput.html
	//write(0, "\x1b[2J", 4);
 	//write(0, "\x1b[H", 3);

	//(See man 3 stdarg)
 	va_list args;

 	va_start(args,s);
 	fprintf(stderr,"error: ");
 	vfprintf(stderr,s,args);
 	fprintf(stderr,"\n");
 	va_end(args);
  	exit(1);
}

/* cp: copy f1 to f2 */

int main(int argc, char *argv[]){

	int f1,f2,n;
	//The value of BUFSIZ is chosen on each system so as to make stream I/O efficient.(found in stdio.h)
	//At least 256 
	char buf[BUFSIZ];

	if(argc!=3){
		die("Usage: cp <input file> <output file>");
	}
	// //open returns -1 on failure
	if((f1 = open(argv[1],O_RDONLY,0))==-1){
		die("cp: can't open %s", argv[1]);
	}
	//See man 2 creat
	// The creat() function is the same as:
	//open(path, O_CREAT | O_TRUNC | O_WRONLY, mode);

	if((f2 = creat(argv[2],PERMS))==-1){
		//%o means signed octal, 3 means minimum number of characters to be printed
		die("cp: can't create %s, mode %03o", argv[2], PERMS);
	}

	

	while((n=read(f1, buf, BUFSIZ))>0){
		if(write(f2,buf,n)!=n){
			die("cp: write error on file %s", argv[2]);
		}
	}

	close(f1);
	return 0;
}
