#include"Number.h"
#include<iostream>
using namespace std;
void   Number::print()
{
	cout << result << endl;
};
 Number Number::add(const Number& other)
{
	return Number(this->result + other.result);
};
 Number Number::mul(const Number& other)
{
	return Number(this->result*other.result);
};

