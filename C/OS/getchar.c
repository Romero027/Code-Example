// A version of getgert that does unbuffered input, by reading the standard input one ar a time

#include<sys/types.h>
#include<sys/uio.h>
#include<unistd.h>
#include<stdio.h>
int getchar_(){
	char c;
	return (read(0, &c, 1) == 1) ? (unsigned char) c : EOF;
}

int main(){

	int x = getchar_();
	printf("%c\n", x);

	return 0;
}
