#include<iostream>
using namespace std;
struct add_x {
  add_x(int x) : x(x) {}
  int operator()(int y) const { return x + y; }

private:
  int x;
};

int main(){
	add_x add42(42); 
	int i = add42(8);
	cout<<i<<endl;

	std::vector<int> foo;
  	std::vector<int> bar;

  	// set some values:
  	for (int i=1; i<6; i++)
   		foo.push_back (i*10);                         // foo: 10 20 30 40 50

  	bar.resize(foo.size());                         // allocate space

  	transform (foo.begin(), foo.end(), bar.begin(), add_x(1));


     for (std::vector<int>::iterator it=bar.begin(); it!=bar.end(); ++it)
    	std::cout << ' ' << *it;
  		std::cout << '\n';                         	                    

}