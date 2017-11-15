#include<iostream>

using namespace std;



class Foo
{
public:
  // single parameter constructor, can be used as an implicit conversion
  //putting explicit here will turn off the implicit constructor. This code won't complile
  //explicit Foo (int foo) : m_foo (foo) {
  Foo (int foo) : m_foo (foo) {
  }

  int GetFoo () { return m_foo; }

private:
  int m_foo;
};

void DoBar (Foo foo)
{
  int i = foo.GetFoo ();
  cout<<i<<endl;
}

int main ()
{ 
  //The argument is not a Foo object, but an int. However, there exists a constructor for Foo that takes an int so this constructor can be used to convert the parameter to the correct type.
  DoBar (42);
}