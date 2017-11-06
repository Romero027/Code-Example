
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#pragma pack(push, 1)

struct Person {
	char name[50];
	int age;
	double height;
};

#pragma pack(pop)

int main() {
	//intialize the struct
	Person someone = { "Frodo", 220, 0.8 };

	string fileName = "test.bin";

	//// Write binary file ////////////////

	fstream outputFile;

	outputFile.open(fileName, ios::binary|ios::out);//set mulitple flags

	if (outputFile.is_open()) {

		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

		outputFile.close();
	} else {
		cout << "Could not create file " + fileName;
	}

	//// Read binary file ////////////////

	Person someoneElse = {};

	fstream inputFile;

	inputFile.open(fileName, ios::binary|ios::in);

	if (inputFile.is_open()) {

		inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));

		inputFile.close();
	} else {
		cout << "Could not read file " + fileName;
	}

	cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;

	return 0;
}