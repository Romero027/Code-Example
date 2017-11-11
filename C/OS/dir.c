//A program show that how to create and remove a directory
#include<stdio.h>
#include<sys/stat.h>


int main(){

	int ret;


	//The first argument is the name of path and the second arguemnt is the mode(See man 2 mkdir)
	ret = mkdir("Mynewdir",0000777);

	return 0;
}
