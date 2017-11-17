// type_info::name example
//declytype example
#include <iostream>       // std::cout
#include <typeinfo>       // operator typeid

using namespace std;

int main() {
	int i;
  	int * pi;
  	string value;
  	cout << "int is: " << typeid(int).name() << '\n';
  	cout << "  i is: " << typeid(i).name() << '\n';
  	cout << " pi is: " << typeid(pi).name() << '\n';
  	cout << "*pi is: " << typeid(*pi).name() << '\n';
   	cout << "value is: " << typeid(value).name() << '\n';

   	//It inspects the declared type of an entity or the type of an expression. Auto lets you declare a variable with particular type whereas decltype lets you extract 
   	//the type from the variable so decltype is sort of an operator that evaluates the type of passed expression.



   	decltype(value) name = "Bob";

   	cout<< typeid(value).name()<<endl;

   	cout<<name<<endl;

  	return 0;
}