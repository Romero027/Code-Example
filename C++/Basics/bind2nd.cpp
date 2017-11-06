#include<iostream>

using namespace std;

template <class Forlter>
void print(Forlter first, Forlter last, const char* title){
	cout<<title<<endl;
	while(first!=last){
		cout<<**first++<<'\t';
	}
	cout<<endl;
}

int main(){
	int data[3]={9,10,11};

	print(data,data+3,"Original values");
	transfrom(data,data+3,data,bind2nd(times<int>(),2));
	print(data,data+3,"New values");
	return 0;
}