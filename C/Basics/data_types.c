//See https://en.wikipedia.org/wiki/C_data_types for more detail
#include<stdio.h>

int main(){
	char c = 97;
	short s = 100;
	printf("%c\n",c);
	printf("%hhi\n",c);//%hhi for numerical output(%hhu for numerical output of unsigned char)
	printf("%hi\n",s);//%hi for short
	
	return 0;
}
