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

	//set f3 = 32.213123 works
	float f3 = 7.0;//note that this will print 0 because of linux is in little endian
	short s4 = *(short*)&f3;
	cout<<s4<<endl;


	float f4 = 7.0;
	int s5 = *(int*)&f4;
	cout<<s5<<endl;

	return 0;
}
