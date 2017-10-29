//Multi-dimensional arrays
#include<stdio.h>
# pragma GCC diagnostic ignored "-Wunused-variable"

int main(){
	int A[5];//A[0]/A[1]... is integer
	int B[2][3];//B[0]/B[1] is 1-D array of 3 integers
	B[0][0] = 2;
	B[0][1] = 3;
	B[0][2] = 6;
	B[1][0] = 4;
	B[1][1] = 5;
	B[1][2] = 8;
	//int *p = B; // This is not correct, because B will return a pointer to 1D array of 3 integers
	int (*p)[3] = B;//This is correct, because (*p)[3] will return a pointer to 1-D array of 3 integers
	//Although all the following will print the same value but actually they are different type of pointer
	//B and &B[0] are equivalent which will return int (*)[3], *B and B[0] and &B[0][0] are equivalent, which will return int *
	printf("The value of B is %d\n",B);
	printf("The value of *B is %d\n",*B);
	printf("The value of B[0] is %d\n",B[0]);
	printf("The value of &B[0] is %d\n",&B[0]);
    printf("The value of &B[0][0] is %d\n",&B[0][0]);
    printf("The value of p is %d\n",p);	
    printf("---------------------------\n");
    //B + 1 will print the address of B + size of 1D array of 3 integers(in bytes) which is most likely be 12
    printf("The value of B+1 is %d\n", B+1);
    //*B+1 and *(B+1) will have different values because B is int (*)[3](12 bytes), *B is int*(4 bytes)
	printf("The value of *B+1 is %d\n",*B+1);//same as &B[0][1]
	printf("The value of *(B+1) is %d\n",*(B+1));
	printf("---------------------------\n");
	printf("The value of *(B+1)+2 is %d\n",*(B+1)+2);//&B[0][0] + 20 because *(B+1) will return an integer pointer
	printf("The value of B[1]+2 is %d\n",B[1]+2);
	printf("The value of &B[1][2] is %d\n",&B[1][2]);
	printf("---------------------------\n");
	printf("The value of *(*B+1) is %d\n", *(*B+1));//This is same as B[0][1]
	//B[i][j] = *(B[i]+j) = *(*(B+i)+j)	
	return 0;
}
