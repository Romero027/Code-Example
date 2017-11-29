
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <assert.h>

using namespace std;

void readfile(ifstream& infile, vector<string>& lines){
	assert(infile.good());

	string line;
	while(infile.peek()!=EOF){
		getline(infile,line);
		lines.push_back(line);
	}
	cout<<"All done! (Number of lines: "<<lines.size()<<")"<<endl;
}


int main() {

	string inFileName = "text.txt";
	//we can use ifstream or fstream
	vector<string> lines;
	ifstream inFile;
	inFile.open(inFileName);
	readfile(inFile, lines);

	for(auto i : lines){
		cout<<i<<endl;
	}


	return 0;
}