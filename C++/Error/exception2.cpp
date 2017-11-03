#include<iostream>
using namespace std;

class CanGoWrong{
	public:
		CanGoWrong(){
			char *pMemory = new char[999999999999999];//allocate too much memory
			delete[] pMemory;
		}
};

int main(void){
	try{
		CanGoWrong wrong;
	}catch(bad_alloc &e){
		cout<<"Cought exception"<<e.what()<<endl;
	}

	cout<<"still working"<<endl;
	return 0;
}