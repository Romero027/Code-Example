//https://stackoverflow.com/questions/6502828/what-does-default-mean-after-a-class-function-declaration

#include <iostream>
#include <string>

using namespace std;

class Test
{
	int id{ 3 };//default value
	string name{"Mike"};

public:
	Test() = default;//It means that you want to use the compiler-generated version of that function, so you don't need to specify a body.
	Test(const Test &other) = delete;//specify that you don't want the compiler to generate that function automatically.
	Test& operator=(const Test& other) = delete;

	Test(int id) : id(id)
	{
		
	}

	void print()
	{
		cout << id << ": " << name << endl;
	}
};

int main() {

	Test test;
	test.print();

	Test test1(77);
	test1.print();
	
	/**
	 * Won't work, we deleted them. 
	 */
	//Test test2 = test;//call to deleted constructor of 'Test'
	//test2 = test;

	return 0;
}