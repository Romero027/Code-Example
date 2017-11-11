#include<stdio.h>
#include<string.h>

int main(){
	char *str = "First String";
	printf("%s\n",str);
	str++;
	//*str = 'j';//read-only 
	return 0;
}
