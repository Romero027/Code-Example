
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

	map<string, int> ages;

	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;

	//update the age of Mike
	ages["Mike"] = 70;

	ages.insert(make_pair("Peter", 100));
	//or
	//pair<string, int> addTomap("Peter", 100);
	//ages.insert(addTomap);
	cout << ages["Raj"] << endl;
	//Returns an iterator to the element with key value ‘Vicky’ in the map if found, 
	//else returns the iterator to end
	if(ages.find("Vicky") != ages.end()) {
		cout << "Found Vicky" << endl;
	}
	else {
		cout << "Key not found." << endl;
	}

	for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		//deference the iterator, you will get a pair 
		pair<string, int> age = *it;

		cout << age.first << ": " << age.second << endl;
	}

	for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
			cout << it->first << ": " << it->second << endl;
		}


	return 0;
}