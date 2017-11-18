//See function pointer in C folder for more detial
#include <iostream>

using namespace std;

void test(int value) {
	cout << "Hello: " << value << endl;
}


int main() {
	test(7);

	void (*pTest1)(int) = &test;
	void (*pTest2)(int) = test;

	(*pTest1)(2);
	pTest2(8);
	

	return 0;
}