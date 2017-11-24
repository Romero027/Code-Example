#include <iostream>
using namespace std;

class Parent {
public:
	virtual void speak() {
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
	Sister sister;

	Parent *ppb = &brother;

	//In this case, dynamic cast will return a null pointer
	//Sister *pbb = dynamic_cast<Sister *>(ppb);

	//reinterpret cast should be avoided
	Sister *pbb = reinterpret_cast<Sister *>(ppb);

	if (pbb == nullptr) {
		cout << "Invalid cast" << endl;
	} else {
		cout << pbb << endl;
	}

	return 0;
}