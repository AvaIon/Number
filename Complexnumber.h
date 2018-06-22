#include<iostream>
#include"Number.h"
#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
using namespace std;
class Complex :public Number
{
public:
	Complex(double r,double i) :Number(r), real(r),imagine(i)
	{

	};
	Complex(Complex &com):Number(0) {
		real = com.real;
		imagine = com.imagine;
	}
	  void print();
	 Complex  add(const Complex& other);
	 Complex  mul(const Complex& other);
private:
	double  real;
	double imagine;
};
#endif

