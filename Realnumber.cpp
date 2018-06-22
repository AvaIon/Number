#include"Realnumber.h"
#include<iostream>
using namespace std;
  void Realnumber:: print()
{
	cout << result << endl;
}
 Realnumber Realnumber::add(const Realnumber&other)
{
	this->result+=other.result;
       return *this;
};
  Realnumber Realnumber::mul(const Realnumber&other)
{
	 this->result*=other.result;
       return *this;

};

