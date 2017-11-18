
#include <iostream>
using namespace std;

class Parent1 {
	int dogs{5};
	string text{"hello"};

public:
	
	Parent1(string text) {
		cout << "string parent constructor" << endl;
	}
};

class Child1: public Parent1{
public:
	Child1(){
	}
};



class Parent2 {
	int dogs{5};
	string text{"hello"};

public:
	Parent2(){
		cout<<"Call parent constructor"<<endl;
	}
	Parent2(string text) {
		cout << "string parent constructor" << endl;
	}
};

class Child2: public Parent2 {
public:
	//Child's constructore will call the parent constructor
	Child2(){
	}
};



int main() {

	Parent parent2("Hello");
	//constructor for 'Child' must explicitly initialize the base class 'Parent' which does
    //not have a default constructor
	Child child;
	return 0;
}