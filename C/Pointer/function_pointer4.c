//qsort can take generic array as argument
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//void pointer are generic pointers, we can typecast them to any data type
int compare(const void* a, const void* b){//const keyword means you can't modify the elements in array
	int A = *((int*)a);
	int B = *((int*)b);
	return A-B;
}

int main(){
	int i, A[] ={-31,22,-1,50,-6,4};
	//Quick Sort, which are able to sort any array(int,char or even struct)
	//https://www.tutorialspoint.com/c_standard_library/c_function_qsort.htm
	qsort(A, 6, sizeof(int),compare);
	for(i=0;i<6;i++) printf("%d ",A[i]);
	printf("\n");
	return 0;
}
	