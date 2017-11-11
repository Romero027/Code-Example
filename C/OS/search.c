//A program which searches a directory for entry "name"
//For introduction to opendir and readdir, see dir.c
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<dirent.h>
#include<string.h>


int main(){
	int len;
	DIR *dir;	
	struct dirent *dp;
	char name[256];


	printf("Enter the name of file: ");	
	scanf("%s",name);
	//open current directory
	dir = opendir(".");
	if(dir==NULL){
		printf("Error! unable to open directory.\n");
		exit(1);
	}

	len = strlen(name);
	while ((dp = readdir(dir)) != NULL) {
    	if (dp->d_namlen == len && strcmp(dp->d_name, name) == 0) {
        	closedir(dir);
            printf("Found %s\n",name);
            return 0;
        }
    }
    printf("Not found %s\n",name);
	closedir(dir);

	return 0;
}
