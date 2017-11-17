//http://www.geeksforgeeks.org/lambda-expression-in-c/
#include <iostream>

using namespace std;

void test(void (*pFunc)(int)) 
{
	pFunc(1);
}

int main() {
	//[ capture clause ] (parameters) -> return-type  
	//{   
   	//		definition of method   
	//} 
	auto func = [](int i)
	{
		cout << "Hello: "<< i  << endl;
	};

	func(1);

	test(func);

	test([](int i) {cout << "Hello again: "<< i << endl; });
	return 0;
}