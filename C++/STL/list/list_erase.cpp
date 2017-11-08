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
  	for (int i=1; i<10; ++i) numbers.push_back(i*10);
  	cout<<"Case1(CORRECT)"<<endl;
	cout<<"Original list:"<<endl;
	for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}
	//We can use for loop, but this is just for demonstration
	for(list<int>::iterator it=numbers.begin(); it != numbers.end();) {
		if(*it == 30){
			it = numbers.erase(it);
		}
		if(*it == 20){
			//because this will increment the iterator, so we do not what to 
			//increment it again
			it = numbers.erase(it);
		}else{
			it++;
		}
		
	}
	
	cout<<"After remove 20 and 30:(20 and 30 is gone)"<<endl;
	for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}


	cout<<"Case 2(ERROR!)"<<endl;
	//ERROR!!!!!
	numbers.clear();//clear the list first
	for (int i=1; i<10; ++i) numbers.push_back(i*10);
	cout<<"Original list:"<<endl;
	for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}
	for(list<int>::iterator it=numbers.begin(); it != numbers.end();it++) {
		//In this case, we are not able to remove 30,because we increment the iterator twice
		if(*it == 30){
			it = numbers.erase(it);
		}
		if(*it == 20){
			it = numbers.erase(it);
		}
		
	}
	cout<<"After remove 20 and 30:(30 is still there)"<<endl;
	for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}
	return 0;
}