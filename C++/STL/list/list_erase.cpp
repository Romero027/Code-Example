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
	
	
	for(list<int>::iterator it=numbers.begin(); it != numbers.end();) {
		//cout<<*it<<endl;
		if(*it == 20){
			//because this will increment the iterator, so we do not what to 
			//increment it again
			it = numbers.erase(it);
		}else{
			//it++;
		}
		if(*it == 20){
			//because this will increment the iterator, so we do not what to 
			//increment it again
			it = numbers.erase(it);
		}else{
			//it++;
		}
	}
	cout<<"------------"<<endl;
	for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}


	return 0;
}