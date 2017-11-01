#include<iostream>
#include <cstddef>
using namespace std;

void func(int n){
	cout<<"Function with int"<<endl;
} 
void func(char *s){
	cout<<"Function with char"<<endl;
}

 
//Driver program 
int main()
{
   	func(nullptr);
   	//func(NULL); won't compile
    return 0;
}

