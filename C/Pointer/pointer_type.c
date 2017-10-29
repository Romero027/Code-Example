#include<stdio.h>

int main(){
	int a = 1025;
	int *p;
	p = &a;
	
	//%lu is unsigned long: https://stackoverflow.com/questions/3209909/how-to-printf-unsigned-long-in-c
	printf("size of integer is %lu bytes\n",sizeof(int));//This will print 4 bytes
	printf("Address = %d, value = %d\n" ,p , *p);//This will print address of p and 1025
	
	printf("Address = %d, value = %d\n" ,p+1 , *p+1);//incrementing p take us 4 bytes forward and *p+1 will print 1026
	printf("Address = %d, value = %d\n" ,p+1 , *(p+1));//*(p+1) will print some garbage 
	
	
	char *p0;
	//p0 = p: incompatible pointer types assigning to 'char *' from 'int *'
	p0 = (char*)p;//typecasting
	printf("size of char is %lu bytes\n",sizeof(char));
	//p0 is 1 because 1025 = 00000000 00000000 00000100 00000001, because *p0 is char pointer, so it will look at only one byte
	printf("Address = %d, value = %d\n", p0, *p0);//*p0 will print 1
	//p0+1 will give us one byte more, *(p0+1) will give us the seconde byte which is 4
	printf("Address = %d, value = %d\n" ,p0+1 , *(p0+1));
	
	//void pointer - Generic pointer
	void *p1;
	//Do not need typecasting
	p1 = p;
	printf("Address = %d" ,p1);
	//no pointer arithmetic 
	//printf("Address = %d" ,p1+1);
	//invalid operands to binary expression: you can't dereference void pointer
	//printf("value = %d\n" *p0);
	return 0;
}
