#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap1(int *i, int *j){
	int temp = *i;
	*i = *j;
	*j = temp;
}


//generic swap
void swap2(void *i, void *j, int size){

	char buffer[size];
	memcpy(buffer,i,size);
	memcpy(i,j,size);
	memcpy(j,buffer,size);

}



// void swap2(void *i, void *j, int size){
// 	void *p = malloc(sizeof(char)*size);
// 	memcpy(p,i,size);
// 	memcpy(i,j,size);
// 	memcpy(j,p,size);
// 	free(p);
// }

int main(){
	int i = 1, j = 2;
	char a = 'a', b = 'b';
	

	printf("i = %d, j = %d\n",i,j);
	swap2(&i,&j,sizeof(int));
	printf("i = %d, j = %d\n",i,j);

	printf("a = %c, a = %c\n",a,b);
	swap2(&a,&b,sizeof(char));
	printf("a = %c, a = %c\n",a,b);

	char* husband = strdup("Fred");
	char* wife = strdup("Allen");
	printf("husband = %s, wife = %s\n",husband,wife);	

	return 0;
}
