//system -- pass a command to the shell(See man 3 system)
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int ret;

	printf("Calling system...\n");
	
	ret = system("ls -l");

	printf("Exiting system... return value is %d\n",ret);
	return 0;
}
