#include<iostream>
#include"Complex.hpp"


using namespace std;
int main(){
	Complex c1(10.0,2.0);
	cout<<c1<<endl;
	Complex c2 = c1;
	cout<<c2<<endl;
	Complex c3;
	c3 = c1+c2;
	cout<<c3<<endl;
	return 0;
}