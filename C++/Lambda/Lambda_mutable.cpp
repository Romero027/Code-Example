#include <iostream>
using namespace std;

int main() {

	int cats = 5;
	//cannot assign to a variable captured by copy in a non-mutable lambda(if we don have mutabe)
	//We can also pass reference in this case, but it will change the value of cats, print 8 8
	[cats]() mutable {
		cats = 8;
		cout << cats << endl;
	}();

	cout << cats << endl;

	return 0;
}