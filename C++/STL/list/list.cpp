//A program show how to use STL list
//List containers are implemented as doubly-linked lists. Note that list does not support random access
//For more information about list:http://www.cplusplus.com/reference/list/list/
//Source:https://github.com/caveofprogramming/advanced-cplusplus/blob/master/Lists/src/main.cpp
#include <iostream>
#include <list>

using namespace std;

int main() {

	list<int> numbers;


	//you can insert in front or back
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_front(0);

	list<int>::iterator it = numbers.begin();
	it++;
	//inserting new elements before the element at the specified position
	numbers.insert(it, 100);
	cout << "Element: " << *it << endl;

	list<int>::iterator eraseIt = numbers.begin();
	eraseIt++;
	//if we just use numbers.erase(eraseIt), this will invalidate the iterator 
	//erase returns: An iterator pointing to the element that followed the last element 
	//erased by the function call.(next element)
	eraseIt = numbers.erase(eraseIt);
	cout << "Element: " << *eraseIt << endl;

	//you can use it++/it-- but not it+=2
	for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}

	for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++) {
		//We have to set it = numbers.erase(it), because erase will invalidate the iterator
		if(*it == 1){
			it = numbers.erase(it);
		}
		cout << *it << endl;

	}


	return 0;
}