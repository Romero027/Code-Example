
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {

	
	string inFileName = "text.txt";
	//we can use ifstream or fstream
	ifstream inFile;

	inFile.open(inFileName);

	if (inFile.is_open()) {

		string line;
		//inFile means !inFile.eof()
		while (inFile) {
			getline(inFile, line);
			cout << line << endl;	
		}

		inFile.close();
	} else {
		cout << "Cannot open file: " << inFileName << endl;
	}

	return 0;
}