//A program that explain the sequence of catching is important

#include <iostream>
#include <exception>
using namespace std;

void goesWrong() {
	bool error1Detected = true;
	bool error2Detected = false;

	if (error1Detected) {
		throw 1;//this exception will be catch by the first catch, not the second
	}

	if (error2Detected) {
		throw exception();
	}
}

int main() {

	try {
		goesWrong();
	} catch (exception &e) {
		//Cath exception first will also give to an warning
		cout << "Catching bad_alloc: " << e.what() << endl;
	} 

	return 0;
}