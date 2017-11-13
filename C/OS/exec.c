#include<stdio.h>
#include<unistd.h>

int main(){
	
	char buf[10];
	int ret;

	while(1){
		//0 is the stdin 
		ret = read(0,buf,10);
		if(ret < 10){
			//We need to put a null character at the end of the string
			buf[ret]='\0';
			printf("You entered: %d of bytes and the string is %s\n",ret, buf);
			break;
		}else{
			printf("You entered: %d of bytes and the string is %s\n",ret, buf);
		}
	}
	
	

	return 0;
}
