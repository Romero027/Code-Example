#include <iostream>
using namespace std;
 
int main()
{
  	int arr[] = {10, 20, 30, 40};
 
  	// Printing elements of an array using
  	// foreach loop
	for (auto  &x : arr)//this can change the element of the array(note: x is a reference)
		x*=x;   	

	
	for (auto x : arr)//this cannot change the element of the array
		x++;   	

  	for (auto x : arr)
     		cout << x << endl;
}
