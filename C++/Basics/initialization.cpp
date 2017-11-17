//initialization in C++ 11
#include <iostream>
#include <vector>
using namespace std;

int main() {

	int value { 5 }; //intialize a integer 5
	cout << "The value of value is: "<<value << endl;

	string text { "Hello" };
	cout << "The value of text is: "<< text << endl;

	int numbers[] { 1, 2, 4 };
	cout << "The value of numbers[1] is: "<<numbers[1]<< endl;

	int *pInts = new int[3] { 1, 2, 3 };
	cout << "The value of pInts[1] is:"<<pInts[1]<< endl;
	delete[] pInts;
	//empty curly braket means initialize it to default value
	int value1 { };//set it to default value which is 0
	cout << "The value of value1 is:" << value1 << endl;

	int *pSomething { }; // equivalent to int *pSomething = nullptr;

	cout << "The value of pSomething is: "<<pSomething << endl;//This might print 0x0 which is 0 in hex


	int *p{&value};
	cout << "The value of *p is: "<< *p << endl;

	int numbers1[5] { };//initialize a array of 0s
	cout << "The value of numbers1[1] is: "<<numbers1[1]<< endl;

	struct {
		int value;
		string text;
	} s1{5, "Hi"};

	cout << s1.text << endl;

	vector<string> strings{"one", "two", "three"};
	cout << strings[2] << endl;

	return 0;
}