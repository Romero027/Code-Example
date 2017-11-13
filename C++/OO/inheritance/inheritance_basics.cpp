#include<iostream>

class student{

public:
	enum year{ fresh, soph, junior, senior, grad};
	student(char* nm, int id, double g, year x):student_id(id),gpa(g),y(x){
		//array of char is un-assignable
		strcpy(name,nm);
	}
 	void print() const;
// protected make them visible only to the derived class
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
		strcpy(dept,d);
		strcpy(thesis,th);
	}
	void print() const;

protected:
	support s;
	char dept[10];
	char thesis[80];

};


void student::print(){
	cout<<name<<", "<< student_id<<", "<<y<<", "<<gpa<<endl;
}

//overriden method
void grad_student::print(){

}
int main(){
	char name[] = "Morris Phol";
	char dept[] =  "Pharmacy";
	char thesis[] = "Retail Pharmacies";
	grad_student gs(name, 200, 3.2, student::grad, grad_student::ta, dept, thesis);
	student& rs = gs; //alias
	return 0;
}