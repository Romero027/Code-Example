//https://www.youtube.com/watch?v=LW8Rfh6TzGg&index=5&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_
#include<stdio.h>


//call by value
void increment1(int a){
	//another a
	a = a + 1;
	printf("Address of variable a in increment = %d\n", &a);//addresses is different 
}


//call by reference
void increment2(int *a){
	//same a
	*a = *a + 1;
	printf("Address of variable a in increment = %d\n", a);//addresses is same as address of a in main function
}

int main(){
	int a;//local variable
	a = 10;
	printf("Original: a = %d\n",a);
	printf("call by value:\n");
	//only the value of a is copied
	increment1(a);
	printf("Address of variable a in main function = %d\n", &a);
	printf("After increment: a = %d\n", a);
	printf("call by reference:\n");
	increment2(&a);
	printf("Address of variable a in main function = %d\n", &a);
	printf("After increment: a = %d\n", a);
	return 0;
}
