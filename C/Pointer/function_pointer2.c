//Function Pointers and callbacks
#include<stdio.h>


void A(){
	printf("Hello\n");
}

void B(void (*ptr)()){ //function pointer as argument
	ptr();//call-back function that "ptr" points to
}

int main(){
	//Method 1
	void (*p)() = A;
	B(p);
	//Method 2
	B(A);//A is a callback function
	return 0;
}
