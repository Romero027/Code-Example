//A program to show how to open a directory/read the files
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<dirent.h>


int main(){
	DIR *dir;	
	//For more information about this struct: See https://linux.die.net/man/3/readdir
	struct dirent *dp;
	//open current directory
	dir = opendir(".");
	//The pointer NULL is returned if filename cannot be accessed, or if it cannot malloc(3) enough memory to hold the
    //whole thing, and sets the global variable errno to indicate the error.
	if(dir==NULL){
		printf("Error! unable to open directory.\n");
		exit(1);
	}


	//The readdir() function returns a pointer to the next directory entry.
	//It returns NULL upon reaching the
    //end of the directory or on error. 
	while( (dp = readdir(dir)) != NULL ){

		//NOTE: The first one(".") is the current directory and the second one("..") is the parent directory
		printf(">> %s\n", dp->d_name);
	}

	closedir(dir);



	return 0;
}
