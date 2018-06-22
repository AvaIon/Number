#include<iostream>
#ifndef NUMBER_H
#define NUMBER_H
using namespace std;
class Number
{
public:
	Number(int n ):result(n)
	{
		
	};
	friend Number operator +(const Number&, const Number&);
	friend Number operator *(const Number&, const Number&);
protected:
	virtual void print();
	virtual Number add(const Number& other);
	virtual Number mul(const Number& other);
private:
	int   result;
};
#endif
