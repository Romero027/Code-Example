#include<iostream>
#include<set>
#include<string>

using namespace std;

class Test{
private:
	int id;
	string name;

public:
	//Default Constructor(Good Practice to define this)
	Test(): id(0),name(""){

	}

	Test(int id, string name): id(id),name(name){

	}


	//we can overload the << operator instead of define a print function 
	void print() const{
		cout<< id << ": " << name <<endl;
	}

	//We need to overload the comparison constructor because
	//Internally, the elements in a set are always sorted following a 
	//specific strict weak ordering criterion indicated by its internal comparison object 
	bool operator<(const Test &other) const{
		return name < other.name;
	}
};


int main(){
	set<int> numbers;

	numbers.insert(50);
	numbers.insert(30);
	numbers.insert(10);
	//The element in set is unique, so insert 30 again has no effect
	numbers.insert(30);
	

	for(auto i : numbers){
		cout<<i<<endl;
	}


	//find a specific value
	//find returns an iterator to the element, if val is found, or set::end otherwise.
	set<int>::iterator itFind = numbers.find(50);

	if(itFind!=numbers.end()){
		cout<<"Found: "<<*itFind<<endl;
	}

	set<Test> tests;

	tests.insert(Test(10,"Mike"));
	tests.insert(Test(20,"Bill"))
	tests.insert(Test(13,"Steven"))
	tests.insert(Test(12,"Alan"))

	for(auto i : tests){
		i->print();
	}


	return 0;
}