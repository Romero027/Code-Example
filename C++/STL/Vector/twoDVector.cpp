#include <iostream>
#include <vector>

using namespace std;

int main() {
	//3*4 vector
	vector< vector<int> > grid(3, vector<int>(4, 7));

	grid[1].push_back(8);

	//Method1
	for(int row=0; row < grid.size(); row++) {
			for(int col=0; col < grid[row].size(); col++) {
				cout << grid[row][col] << flush;
			}

			cout << endl;
	}

	//Method2
	for(auto i : grid){
		for(auto j : i){
			cout << j << flush;
		}
		cout << endl;
	}

	return 0;
}