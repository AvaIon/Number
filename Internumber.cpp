#include<iostream>
#include"Internumber.h"
using namespace std;
void Internumber::print()
{
	cout << result << endl;
};
Internumber Internumber::add(const Internumber&other)
{
	this->result += other.result;
	return *this;
};
Internumber Internumber::mul(const Internumber&other)
{
	this->result *= other.result;
	return *this;
};

