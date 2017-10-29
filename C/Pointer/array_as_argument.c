#include<stdio.h>
//"int A[]" is interpret as "int *A" by the compiler.("int* A" and "int *A" is equivalent.)
int SumOfElements(int A[],int size){
	int i, sum  = 0;
	//the size of A in this function is just the size of first element(a int), so we cannot get the number of elements in the array 
	//which means we need to pass the size as an argument
	int sizeOfA = sizeof(A)/sizeof(A[0]);//sizeOfA = 1 or 2 depends on your compiler 
	printf("Number of integer in A in function SOE is %d\n", sizeOfA);//SOE denotes SumOfElements
	printf("Size of A in function SOE = %lu, size of A[0] = %lu\n", sizeof(A), sizeof(A[0]));//this will print 8 and 4
	for(i = 0; i <size; i++){
		sum+=A[i];
	}
	return sum;
}


//because we pass the pointer as argument(call-by-reference), so we can change the value in A
void Double(int* A, int size){
	int i, sum  = 0;
	for(i = 0; i <size; i++){
		A[i] = 2*A[i];
	}
}
int main(){
	int i;
	int A[] = {1,2,3,4,5};
	int size = sizeof(A)/sizeof(A[0]);
	int total = SumOfElements(A,size);
	printf("Sum of elements = %d\n",total);
	printf("Main - size of A = %lu, size of A[0] = %lu\n", sizeof(A), sizeof(A[0]));
	printf("Double every integer in the array A\n");
	Double(A,size);
	for(i = 0; i <size; i++){
		printf("%d ", A[i]);
	}
	printf("\n");
	
	return 0;
}
