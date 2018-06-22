#include"Complexnumber.h"
#include<iostream>
using namespace std;
void Complex::print()
{
	cout << "real"<<real<<"imagine"<<imagine << endl;
}
Complex Complex::add(const Complex&other)
{
	this->real += other.real;
	this->imagine += other.imagine;
	return *this;
};
Complex Complex::mul(const Complex&other)
{
	this->real = (this->real*other.real) - (this->imagine*other.imagine);
	this->imagine = (this->imagine*other.real) + (this->real*other.imagine);
	return *this;
};
