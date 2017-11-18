//C++ 11 
#include <iostream>
using namespace std;

class Test {
	int dogs{5};
	string text{"hello"};

public:
	//In C++ 11(C++ 98 is not allowed), you can call other constructor
	Test(): Test("hello") {
		cout << "No parameter test constructor" << endl;
	}

	Test(string text) {
		cout << "string parent constructor" << endl;
	}
};

int main() {
	Test test("Hello");

	return 0;
}