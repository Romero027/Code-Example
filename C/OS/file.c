#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/uio.h>

#pragma GCC diagnostic ignored "-Wunused-parameter"


int main(int argc, char *argv[]){

	int fd;
	char buf[14];
	char str[13] = "Hello World!\n";
	/* open */
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
	write(fd,str,13);


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
	read(fd,buf,13);
	buf[13] = '\0';

	close(fd);

	printf("buf: %s\n",buf);

	return 0;
}
