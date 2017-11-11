//A program show that how to create and remove a directory
#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>

int main(){

	int ret;

	/* create a directory */
	
	//The first argument is the name of path and the second arguemnt is the mode(See man 2 mkdir)
	//ret = mkdir("Mynewdir",
	//S_IRUSR|S_IRGRP|S_IROTH|S_IWUSR|S_IXUSR|S_IXGRP|S_IXOTH);

	/* remove a directory */
	ret = rmdir("Mynewdir");

	return 0;
}
