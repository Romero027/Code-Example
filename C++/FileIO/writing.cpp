
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	// ofstream and fstream :
	// ofstream only has methods for outputting, so for instance if you tried textfile >> whatever it would not compile. fstream can be used for input and output
	// ofstream outFile;

	fstream outFile;

	string outputFileName = "text.txt";

	// outFile.open(outputFileName);
	outFile.open(outputFileName, ios::out);

	if(outFile.is_open()) {

		for(int i = 0; i<10 ; i++){
			outFile << i << ": Hello there "<< i<< endl;

		}
	}
	else {
		cout << "Could not create file: " << outputFileName << endl;
	}
	outFile.close();

	return 0;
}