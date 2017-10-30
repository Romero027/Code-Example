#include<iostream>
#include<iterator>
#include<fstream>
#include<vector>

using namespace std;


int main(void){
	ifstream data_file("data.txt");  //text file containing data 
	istream_iterator<int> start(data_file),end,end1; //start pointer and end pointer
	vector<int> data(start, end);
/*	
	int sum = 0;
	cout<<"use vector iterator"<<endl;
	for(auto it =data.begin(); it!=data.end();++it){
		sum+=*it;
		
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<"start/end"<<endl;*/
	for(auto it =start; it!=end1;++it){
	//	sum+=*it;
		
		cout<<*it<<" ";
	}

	cout<<endl;
	
	//cout<< "sum = " << sum << endl;
	
	//cout<< "average is = " << 1.0*sum/data.size()<<endl;
	
}
