#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/uio.h>
#include<string.h>


#pragma GCC diagnostic ignored "-Wunused-parameter"


int main(int argc, char *argv[]){

	int fd;
	char buf[14];
	char str[13] = "Hello World!\n";
	/* open */
	/*Before you read or write a file, you must inform the system of you intent to do so, a process called opening
	 *the file. The system checks your right to create/duscard content.
	 *If all is well,, open will return to the program a small non-negative integer called a file descriptor.
	 *Whenever input or output is be done on the file, the file descriptor is used instead of the name to identify the
	 *file. (A file descriptor is analogus to the file pointer used by the standard library). All information about an open 
	 *file is maintained by the system. NOTE: When command interpreter (Shell) runs a program, three files are open.
	 *with file descriptors 0, 1 and 2, called standard input, and standard output and the standard error.
	 */




	//use | operator to allow multiple options(See man 2 open for more detail)
	//last argument sets the file permission(See man 2 chmod)
	fd = open("test.txt", O_CREAT|O_WRONLY|O_APPEND, S_IRUSR|S_IWUSR);

	if(fd == -1){
		printf("Failed to create and open the file\n");
		exit(1);
	}


	/* write */
	//write(int fildes, const void *buf, size_t nbyte);
	//write() attempts to write nbyte of data to the object referenced by the descriptor fildes from the
    //buffer pointed to by buf.(See man 2 write)
	//returns a count of the number of bytes transferred, -1 on failure
	int n_write = write(fd,str,strlen(str));
	printf("You write %d bytes in to text.txt\n",n_write);

	close(fd);

	/* open */
	fd = open("test.txt", O_RDONLY);


	if(fd == -1){
		printf("Failed to open and read the file\n");
		exit(1);
	}


	/* read */
	//read(int fildes, void *buf, size_t nbyte);
	//read() attempts to read nbyte bytes of data from the object referenced by the descriptor fildes into the
    //buffer pointed to by buf.
    //If sucessful, return the number of bytes read. zero is return if reading eof. -1 on failure
	read(fd,buf,13);
	buf[13] = '\0';

	close(fd);

	printf("buf: %s\n",buf);

	return 0;
}
