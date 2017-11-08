//A program show how to use STL list
//List containers are implemented as doubly-linked lists. Note that list does not support random access
//For more information about list:http://www.cplusplus.com/reference/list/list/
//Source:https://github.com/caveofprogramming/advanced-cplusplus/blob/master/Lists/src/main.cpp
#include <iostream>
#include <list>

using namespace std;

int main() {

	list<int> numbers;
	// set some values:
  	for (int i=1; i<10; ++i) mylist.push_back(i*10);
	//you can use it++/it-- but not it+=2
	
	for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++) {
		//We have to set it = numbers.erase(it), because erase will invalidate the iterator
		//cout << *it << endl;
		if(*it == 1){
			it = numbers.erase(it);
		}
	}
	for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}


	return 0;
}