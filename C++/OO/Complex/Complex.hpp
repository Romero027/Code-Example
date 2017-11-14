#ifndef _COMPLEX_H_
#define _COMPLEX_H_

using namespace std;

class Complex{
private:
	double real;
	double imaginary;

public:
	Complex();
	Complex(double a, double b);
	Complex(const Complex& c);
	const Complex& operator=(const Complex& c);
	bool operator==(const Complex& c);
	bool operator!=(const Complex& c);
	friend ostream &operator<<(ostream &os, const Complex& c);
	//return just complex because we return a brand new object
	friend Complex operator+(const Complex &c1, const Complex &c2);
	friend Complex operator+(const Complex &c, double d);
	//This also works(which one we need to use)
	//Complex operator+(const Complex &c);//works with c1+c2
	//Complex operator+(double d);//works with c+10.0
};

#endif 