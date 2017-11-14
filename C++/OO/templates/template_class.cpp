#include<iostream>
using namespace std;

//class can be replaced by typename
template<class T, class K>
class Test{
private:
	T obj1;
	K obj2;
public: 
	Test(T obj1,K obj2):obj1(obj1),obj2(obj2){};
	void print(){
		cout<<obj1<<": "<<obj2<<endl;
	}
};


int main(){
	Test<int,string> t(1518549,"Allen");
	t.print();
	return 0;
}