//Function Pointers in C/C++
#include<stdio.h>

int Add(int a, int b){
	return a+b;
}

void PrintHello(char *name){
	printf("Hello %s\n",name);
}


int main(){
	int c;
	//example 1
	//pointer to function that should take 
	//(int, int) as argument/parameter and return int
	int (*p1)(int, int);
	int (*p2)(int,int);
	//Method 1 to use function pointer
	p1 = &Add;
	c = (*p1)(2,3); //de-referencing and executing the function
	printf("%d\n", c);
	
	//Method2- more famous
	p2 = Add;//function name will return us pointer
	c = p2(2,3);
	printf("%d\n", c);
		
	//example 2
	void (*ptr)(char*);
	ptr = PrintHello;
	ptr("Tom");
	
	return 0;
}
