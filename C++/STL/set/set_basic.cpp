#include<iostream>
#include<set>
#include<string>

using namespace std;

class Test{
private:
	string name 
	int id;
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
}
int main(){
	set<int> numbers;

	numbers.insert(50);
	numbers.insert(30);
	numbers.insert(10);

	for(auto i : numbers){
		cout<<i<<endl;
	}
	return 0;
}