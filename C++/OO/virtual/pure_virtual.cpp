#include<iostream>
using namespace std;
 

 // we cannot create a base class object
class Base
{
   int x;
public:
    virtual void fun() = 0;
    virtual void foo(){
    	cout<<1<<endl;
    }
    int getX() { return x; }
};
 
// This class ingerits from Base and implements fun()
class Derived: public Base
{
    int y;
public:
    void fun() { cout << "fun() called\n"; }
};
 
int main(void)
{	
	// variable type 'Base' is an abstract class
	//Base b;
    Derived d;
    d.fun();
    d.foo();
    return 0;
}
