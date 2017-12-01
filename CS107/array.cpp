#include<iostream>

using namespace std;

int main(){
	int i = 0;

	int array[10];
	cout<<&i<<endl;//140732717410984
	cout<<array<<endl;//140732717411056
	long g = &i - array;
	//cout<<g<<endl;
	cout<<&array[0-g*4]<<endl;
	array[0-g*4]=10;
	
	cout<<i<<endl;
	// int j = 1;
	// cout<<j<<endl;

	return 0;
}
