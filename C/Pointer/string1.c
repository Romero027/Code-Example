//character array and pointers
#include<stdio.h>
#include<string.h>

int main(){
	//Method 1
	char c[] = "JOHN";//implicitly put null character in the end 
	printf("String is %s\n",c);
	printf("Size in bytes = %lu\n",sizeof(c));// This will print 5(including a null character
	int len = strlen(c);
	printf("Length = %d\n",len);//This will print 4(The length of string
	
		
	//Method2
	
	char d[] = {'J','O','H','N','\0'};// have to put a null character manually 
	printf("String is %s\n",d);
	printf("Size in bytes = %lu\n",sizeof(d));// This will print 5(including a null character
	printf("Length = %lu\n",strlen(d));
	
	//sizeof a is 3 and size of b is 2
	//This is because a ends with two nulls (the explicit one and the implicit one) while b ends only with the implicit one.
	char a[] = "a\0";//if you explicit put a 
	char b[] = "a";
	printf("%lu %lu\n", sizeof(a), sizeof(b));

	return 0;
}
