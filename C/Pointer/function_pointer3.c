//By pass the pointer of function as argument, we can write our own comparison function
//If we don't have pointer of function, we have to write two functions if we want to sort it in both decreasing order 
//and increasing order

#include<stdio.h>
#include<stdlib.h>


int compare(int a, int b){
	if(a > b) return 1;
	return -1;
}

int absolute_compare(int a, int b){
	if(abs(a) > abs(b)) return 1;
	return -1;
}

void BubbleSort(int A[],int n, int (*compare)(int,int)){
	int i,j,temp;
	for(i = 0; i<n;i++){
		for(j=0;j<i;j++){
			if(compare(A[j],A[j+1]) > 0){
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}
}

int main(){
	int i, A[] = {2,4,3,7,5,6};
	BubbleSort(A,6,compare);
	for(i=0;i<6;i++) printf("%d ",A[i]);
	printf("\n");
	int B[] = {-31,22,-1,50,-6,4};
	BubbleSort(B,6,absolute_compare);
	for(i=0;i<6;i++) printf("%d ",B[i]);
	printf("\n");
	return 0;
}
