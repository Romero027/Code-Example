#include<stdio.h>
#include<unistd.h>

int main(){
	
	char buf[10];
	int ret;
	//0 is the stdin 
	ret = read(0,buf,10);/
	printf("You entered: %s\n", buf);
	


	return 0;
}
