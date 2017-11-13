//NOTE:Rule of three:https://en.wikipedia.org/wiki/Rule_of_three_(C%2B%2B_programming)
#include <iostream>
#include <string>

using namespace std;

class Test
{
	int id; 
	string name;

public:
	Test() : id(0), name("")
	{
		
	}

	Test(int id, string name) : id(id), name(name)
	{
		
	}

	//copy constructor
	Test(const Test& other)
	{
		cout << "Copy constructor running" << endl;
		this->id = other.id;
		this->name = other.name;
	}


	//We need to return reference here in case we want to do something like a=b=c
	//a=b is equivalent to a.operator=(b)
	const Test& operator=(const Test &other) {//we want to return const reference
		cout << "Assignment running" << endl;
		//Deep copy
		this->id = other.id;
		this->name = other.name;
		return *this;
	}
	
	void print() const
	{
		cout << id << ": " << name << endl;
	}
};

int main() {

	Test test1(10, "Mike");
	cout << "Print test1: " << flush;
	test1.print();

	Test test2(20, "Bob");

	test2 = test1;
	cout << "Print test2: " << flush;
	test2.print();

	Test test3;
	test3 = test2;
	cout << "Print test3: " << flush;
	test3.print();

	cout << endl;

	// Copy initialization. 
	// This will call copy constructor
	Test test4 = test1;
	test4.print();
	return 0;
}