//Pointer as function returns(return pointer in case of heap or global variable
//incorrect example (for more information,  see video https://www.youtube.com/watch?v=E8Yh4dw6Diw&index=14&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_)
#include<stdio.h>
#include<stdlib.h>

void PrintHelloWorld(){
	printf("Hello World\n");
}

//This function has logical error, because it tries to return the address of a local variable(not heap/global/static variable)
// from top to bottom. However, it is ok to pass such pointer from bottom to top
int *Add(int* a,int* b){//Called function - returns pointer to integer
	int c = (*a)+(*b);
	return &c;
}

//This is correct, you can return pointe to heap from top to bottom in call-stack
int *Add_(int *a, int *b){
	int* c= (int *)malloc(sizeof(int));
	*c = (*a) + (*b);
	return c;
}

int main(){//Calling function
	int a=2, b=4;
	int *ptr1 = Add(&a,&b);//a and b are integers local to main
	//PrintHelloWorld();
	printf("Sum = %d\n",*ptr1);//This will not print 6 but some garbage value
	int* ptr2 = Add_(&a,&b);
	PrintHelloWorld();
	printf("Sum = %d\n",*ptr2);//This will print 6
	return 0;
}
