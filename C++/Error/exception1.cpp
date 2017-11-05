//A program that explain the basic of try catch
#include <iostream>
using namespace std;

void mightGoWrong(){
	bool error1 = false;
	bool error2 = true;
	//You have to catch int in main function, if not you will get an runtime error
	// terminating with uncaught exception of type int
	if(error1)
		throw 8;

	//if error1 is true, this will not been executed
	//if this returns "Error!!", it will be a runtime error
	//terminating with uncaught exception of type char const*
	if(error2)
		throw string("Error!!");
	
}

void callerror(){
	mightGoWrong();
}


int main(){
	

	try{
		callerror();
	}catch(int i){
		cout<<"The error number is "<< i << endl;
	}catch(string &str){
		cout<<"The error message is "<<str<<endl;
	}

	cout<<"Still working"<<endl;//Program is still being executed after catch
	return 0;
}