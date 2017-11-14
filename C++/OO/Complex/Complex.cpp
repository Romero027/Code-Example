#include<iostream>
#include"Complex.hpp"

using namespace std;

Complex::Complex():real(0.0),imaginary(0.0){

}
Complex::Complex(double a, double b):real(a),imaginary(b){

}

Complex::Complex(const Complex& c){
	this->real = c.real;
	this->imaginary = c.imaginary;
}


const Complex& Complex::operator=(const Complex& c){
	this->real = c.real;
	this->imaginary = c.imaginary;
	return *this;
}	



ostream &operator<<(ostream &os, const Complex& c){
	os<<"( "<< c.real<<" : "<<c.imaginary<<" )";
	return os;
}