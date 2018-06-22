#include<iostream>
#include"Number.h"
#include"Realnumber.h"
using namespace std;
int main()
{
	Realnumber a(5);
	Realnumber b(6);
	a.add(b);
	a.print();
	return 0;
}
