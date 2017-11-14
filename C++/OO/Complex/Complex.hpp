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
	friend ostream &operator<<(ostream &os, const Complex& c);
};

#endif 