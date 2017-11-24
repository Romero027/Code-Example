//Use dynamic_cast for converting pointers/references within an inheritance hierarchy.
//Use static_cast for ordinary type conversions.
//Use reinterpret_cast for low-level reinterpreting of bit patterns. Use with extreme caution.
//Use const_cast for casting away const/volatile. Avoid this unless you are stuck using a const-incorrect API.
#include <iostream>
using namespace std;

class Parent {
public:
	void speak() {
		cout << "parent!" << endl;
	}
};

class Brother: public Parent {

};

class Sister: public Parent {

};

int main() {

	Parent parent;
	Brother brother;

	Parent *ppb = &brother;

	//static_cast is the first cast you should attempt to use.
	//When casting a pointer, if the cast fails, the cast returns NULL. This provides a quick method of determining if a given object of a particular dynamic type. 
	Brother *pbb = static_cast<Brother *>(ppb);

	cout << pbb << endl;

	Parent &&p = static_cast<Parent &&>(parent);
	p.speak();

	return 0;
}