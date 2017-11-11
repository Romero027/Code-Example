//A program show that how to use link/syslink and unlink
#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>

int main(){

	int ret;

	/* create a directory */*
	

	ret = mkdir("Mynewdir",
	S_IRUSR|S_IRGRP|S_IROTH|S_IWUSR|S_IXUSR|S_IXGRP|S_IXOTH);


	/* create symbolic link */
	//symlink(const char *path1, const char *path2);
	//A symbolic link path2 is created to path1 (path2 is the name of the file
    //created, path1 is the string used in creating the symbolic link).
	ret = 


	return 0;
}
