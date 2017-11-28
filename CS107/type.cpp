//See note
#include<iostream>

using namespace std;

int main(){
	char ch1 = 'A';
	short s1 = ch1;
	cout<<s1<<endl;
	
	short s2 = 67;
	char ch2 = s2;
	cout<<ch2<<endl;


	int  i1 = 2113536;//i = 2^21+2^14
	short s3 = i1;//s3 = 2^14
	cout<<s3<<endl;

	int i2 = 5;
	float f1 = i2;
	cout<<f1<<endl;

	int i3 = 37;
	float f2 = *(float*)&i3;
	cout<<f2<<endl;

	float f3 = -1000.0;
	short s4 = *(short*)&f3;
	cout<<s4<<endl;
	return 0;
}
