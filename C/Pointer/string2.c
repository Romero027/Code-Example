//character array and pointers
#include<stdio.h>
//again char c[] and char *c are equivalent
//const means you can read the array but not write
void print(const char C[]){
	while(*C!='\0'){
		printf("%c",*C);
		C++;
	}
	printf("\n");
}
	

int main(){
	//In this case, string gets stored in the space for array
	char A[20] = "Hello";
	//In the following two cases, string gets stored as a constant during compile time, which means you can't modify
	char *B = "Hello";
	//B[0] = 'A';//this will give you an error
	printf("Hello World\n");
	
	//produces the same output
	print(A);
	print(B);
	return 0;
}
