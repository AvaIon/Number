#include<iostream>
#include"Realnumber.h"
#ifndef INTERNUMBER_H
#define INTERNUMBER_H
using namespace std;
class Internumber:public Realnumber
{
public:
	void print();
	Internumber(int n) :Realnumber(n), result(n)
	{

	};
	Internumber add(const Internumber&other);
	Internumber mul(const Internumber&other);



private:
	int result;
};


#endif
