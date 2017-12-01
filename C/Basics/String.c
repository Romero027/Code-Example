#include<stdio.h>

int main(){
	//This is incorrect
	//array type 'char [7]' is not assignable
	//char s[7];
	char *s;
	s = "Olympic";
	//s[0]= 'A';//read-only

	return 0;
}
