#include<stdio.h>

struct{
	int a;
	int b;
}S;

int main(){
	struct  S* s;
	int* i;
	char* c;
	float* f;
	//The following will print 8 on my computer which has 8GB RAM(8GB addressable range)

	//from handout written by Nick Parlante and Julie Zelenski.
	//A pointer is an address. The size of the pointer depends on the range of addresses on the machine.
	//Currently almost all machines use 4 bytes to store an address, creating a 4GB addressable range. (2008)
	//There is actually very little distinction between a pointer and a 4 byte unsigned integer. 
	//They both just store integers— the difference is in whether the number is interpreted as a number or as an address.
	printf("size of int pointer is: %lu\n",sizeof(i));
	printf("size of char pointer is: %lu\n",sizeof(f));
	printf("size of float pointer is: %lu\n",sizeof(c));
	printf("size of struct  pointer is: %lu\n",sizeof(s));
	return 0;
}
