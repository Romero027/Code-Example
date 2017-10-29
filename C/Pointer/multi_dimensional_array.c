#include<stdio.h>
# pragma GCC diagnostic ignored "-Wunused-variable"
# pragma GCC diagnostic ignored "-Wunused-parameter"
void Func1(int *A){//Argument 1-D array of integers 
}

void Func2(int (*A)[3]){//or A[][3] Argument: 2-D array of integers(NOTE: A[][] or **A is not correct)
}
void Func3(int (*A)[2][2]){//or A[][2][2] Argument: 3-D array of integers(NOTE: ***A is not correct)
}
int main(){
	int C[3][2][2] = {{{2,5},{7,9}},
					  {{3,4},{6,1}},
					  {{0,8},{11,13}}};
 	int A[2] = {1,2};
 	int B[2][3] ={{2,4,6},{5,7,8}};
 	int D[2][4];
 	int E[5][3];
 	Func1(A);
 	Func2(B);
 	//Func2(D);//This will give you an error 
 	Func2(E);//This works fine 
	
	return 0;
}
