// C++ program to illustrate dynamic allocation
// and deallocation of memory using new and delete
#include <iostream>
using namespace std;
 
int main(){
	int* p_array  = new int[5];  
	cout << p_array[0] << endl;//This will print 0
	return 0;
}