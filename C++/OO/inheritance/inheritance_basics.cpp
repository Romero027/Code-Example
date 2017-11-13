#include<iostream>

using namespace std;
class student{

public:
	enum year{ fresh, soph, junior, senior, grad};
	student(char* nm, int id, double g, year x):student_id(id),gpa(g),y(x){
		//array of char is un-assignable
		strcpy(name,nm);
	}
	//if we add virtual keyword, the print method in the main funciton will have different result
	//virtual void print() const;
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


void student::print() const{
	cout<<name<<", "<< student_id<<", "<<y<<", "<<gpa<<endl;
}

//overriden method
void grad_student::print() const{
	//student:: is required, otherwise you will get an infinite recursion
	student::print();
	cout<<dept<<", "<<s<<endl<<thesis<<endl; // add some stuff
}


int main(){
	char name2[] = "Morris Pohl";
	char name1[] = "Mae Pohl";
	char dept[] =  "Pharmacy";
	char thesis[] = "Retail Pharmacies";
	student s(name1,100,3.4,student::fresh);
	grad_student gs(name2, 200, 3.2, student::grad, grad_student::ta, dept, thesis);
	student *ps = &s;
	ps->print();//student::print
	grad_student *pgs;
	ps = pgs = &gs;//ps is student type pointer, pgs is grad_student types pointer
	//This is the default behavior, if we add virtual keyword(see print in student), the first one will call grad_student::print
	ps->print();//student::print
	pgs->print();//gra_student::prints

	return 0;
}