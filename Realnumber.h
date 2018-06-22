#include<iostream>
#include"Number.h"
#ifndef REALNUMBER_H
#define REALNUMBER_H
using namespace std;
class Realnumber :public Number
{
public:
	Realnumber(int n) :Number(n),result(n)
	{
	
	};
	virtual  void print();
	virtual Realnumber  add(const Realnumber& other);
	virtual Realnumber  mul(const Realnumber& other);
private:
	int  result;
};
#endif
