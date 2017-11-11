#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/types.h>
#include<sys/stat.h>

#pragma GCC diagnostic ignored "-Wunused-parameter"


int main(int argc, char *argv[]){

	int fd;

	/* open */
	//use | operator to allow multiple options(See man 2 open for more detail)
	fd = open("test.txt", O_CREAT|O_WRONLY|O_APPEND, S_IRWXU|S_IRWXG|S_IRWXO);

	if(fd == -1){
		printf("Failed to create and open the file");
		exit(1);
	}


	/* write */
	//write(int fildes, const void *buf, size_t nbyte);
	//write() attempts to write nbyte of data to the object referenced by the descriptor fildes from the
    //buffer pointed to by buf.(See man 2 write)
	write(fd,"Hello World!\n",13);


	//close(fd);

	/* open */
	//fd = open("test.txt", O_CREAT|O_WRONLY|O_APPEND, 0600);

	close(fd);





	return 0;
}
