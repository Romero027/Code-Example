#include<iostream>

class student{
public:
	enum year{ fresh, soph, junior, senior, grad};
	student(char* nm, int id, double g, year x): name(nm),student_id(id),gpa(g),y(x){

	}

protected:
	int student_id;
	double gpa;
	year y;
	char name[30];
}

int main(){
	student s("Bill",1518549,3.94,fresh);
	return 0;
}