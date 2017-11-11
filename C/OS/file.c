#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#pragma GCC diagnostic ignored "-Wunused-parameter"


int main(int argc, char *argv[]){

	int fd;

	/* open */
	//use | operator to allow multiple options(See man 2 open for more detail)
	fd = open("test.txt", O_CREAT|O_WRONLY, 0600);

	if(fd == -1){
		printf("Failed to create and open the file");
		exit(1);
	}

	close(fd);





	return 0;
}
