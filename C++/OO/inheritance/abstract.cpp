//https://www.tutorialspoint.com/cplusplus/cpp_interfaces.htm

#include <iostream>
using namespace std;
//A class is made abstract by declaring at least one of its functions as pure virtual function.
//Animal is called abstract  class(Attempting to instantiate an object of an abstract class causes a compilation error.)
class Animal {
public:
	//pure virtual function(A pure virtual function is specified by placing "= 0" )
	virtual void run() = 0;
	virtual void speak() = 0;
};


//Classes that can be used to instantiate objects are called concrete classes.
class Dog: public Animal {
public:
	virtual void speak() {
		cout << "Woof!" << endl;
	}
};

class Labrador: public Dog {
public:
	Labrador() {
		cout << "new labrador" << endl;
	}
	virtual void run() {
		cout << "Labrador running" << endl;
	}
};

class Husky: public Dog
{
public:
	Husky()
	{
		cout << "new husky" << endl;
	}
	virtual void run()
	{
		cout << "Husky running" << endl;
	}
};

void test(Animal &a) {
	a.run();
}

int main() {
	Animal a;
	Labrador lab;
	lab.run();
	lab.speak();

	Animal *animals[5];
	animals[0] = &lab;

	animals[0]->speak();

	Husky husky;

	test(lab);
	test(husky);

	return 0;
}