#include <iostream>
#include <map>
#include <string>

using namespace std;

class Person {
private:
	string name;
	int age;

public:
	//You have to have default constructor(see main function)
	Person() :
			name(""), age(0) {

	}

	Person(string name, int age) :
			name(name), age(age) {

	}

	//copy constructor
	Person(const Person& other){
		cout << "Copy constructor running!" << endl;
		cout<<"Name is "<<other.name<<endl;
		name = other.name;
		age = other.age;
	}

	void print() {
		cout << name << ": " << age << endl;
	}
};

int main() {
	map<int, Person> people;
	//this will intialize a person using default constructor 
	//and use assignment operator.(default assignmemnt operator(shallow copy))
	//We might want to overload assignment operator
	people[50] = Person("Mike", 40);
	people[32] = Person("Vicky", 30);
	people[1] = Person("Raj", 20);


	people.insert(make_pair(55, Person("Bob", 45 )));
	people.insert(make_pair(55, Person("Sue", 24 )));

	for (map<int, Person>::iterator it = people.begin(); it != people.end();
			it++) {
		cout << it->first << ": " << flush;
		it->second.print();
	}

	return 0;
}