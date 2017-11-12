#include<iostream>

class student{

public:
	enum year{ fresh, soph, junior, senior, grad};
	student(char* nm, int id, double g, year x):student_id(id),gpa(g),y(x){
		//array of char is un-assignable
		strcpy(name,nm);
	}
 	void print() const;

protected:
	int student_id;
	double gpa;
	year y;
	char name[30];

};


//Derived class is modification of base class that inherits public and protected members of base class
//student_id gpa name year print() are inherited
class grad_student: public student{

public:
	enum support{ta, ra, fellowship, other};
	//call the base case constructor
	grad_student(char* nm, int id, double g, year x, support t, char *d, char *th): student(nm,id,g,x),s(t){

	}
	void print() const;

protected:
	support s;
	char dept[10];
	char thesis[80];

}


int main(){
	student s("Bill",1518549,3.94,fresh);
	return 0;
}