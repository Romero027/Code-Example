#include<iostream>
#include"Complex.hpp"

using namespace std;

Complex::Complex():real(0.0),imaginary(0.0){

}
Complex::Complex(double a, double b):real(a),imaginary(b){

}



Complex::Complex(const Complex& c){
	cout<<"Called copy constructor"<<endl;
	this->real = c.real;
	this->imaginary = c.imaginary;
}


const Complex& Complex::operator=(const Complex& c){
	cout<<"Called assignment operator"<<endl;
	this->real = c.real;
	this->imaginary = c.imaginary;
	return *this;
}	

bool Complex::operator==(const Complex& c){
	return (this->real==c.real)&&(this->imaginary==c.imaginary);
}

bool Complex::operator!=(const Complex& c){
	return !(*this==c);
}
// Complex Complex::operator+(const Complex &c){
// 	return Complex(this->real+c.real, this->imaginary+c.imaginary);
// }


ostream &operator<<(ostream &os, const Complex& c){
	os<<"( "<< c.real<<" : "<<c.imaginary<<" )";
	return os;
}


Complex operator+(const Complex &c1, const Complex &c2){
		return Complex(c1.real+c2.real, c2.imaginary+c2.imaginary);
}


Complex operator+(const Complex &c, double d){
	return Complex(c.real+d, c.imaginary);
}