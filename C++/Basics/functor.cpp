//A functor is pretty much just a class which defines the operator(). 
//That lets you create objects which "look like" a function:
#include<iostream>
#include<vector>
using namespace std;

//this is a functor
struct add_x {
  	add_x(int x) : x(x) {}
  	int operator()(int y) const { return x + y; }

private:
  	int x;
};

int main(){

	add_x add42(42);//This creates an instance of functor class
	int i = add42(8);//and we can call it
	cout<<i<<endl;//i is 50 now 

	std::vector<int> foo;
  	std::vector<int> bar;

  	// set some values:
  	for (int i=1; i<6; i++)
   		foo.push_back (i*10);   // foo: 10 20 30 40 50

  	bar.resize(foo.size());    // allocate space

  	// Pass a functor to std::transform, which calls the functor on every element 
	// in the input sequence, and stores the result to the output sequence
  	transform (foo.begin(), foo.end(), bar.begin(), add_x(1));
  										// bar: 11 21 31 41 51

    for (auto it=bar.begin(); it!=bar.end(); ++it)
    	cout << *it<< ' ';
  		cout <<'\n';                         	                    

}