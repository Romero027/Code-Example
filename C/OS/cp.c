// A simplifed version of the unix program cp, which copies once file to another. 
// This version of cp copies only one file, it does not permit the second argument to be a diectory
// and it invents permissions instead of copying them
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
