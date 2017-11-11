#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/uio.h>
#include<dirent.h>

#pragma GCC diagnostic ignored "-Wunused-parameter"


int main(int argc, char *argv[]){

	DIR *dir;	

	//open current directory
	dir = opendir(".");

	
	return 0;
}
