#include<iostream>
#ifndef OFFICER_H
#define OFFICER_H
#include "employee.h"
using namespace std;
class officer:public employee
{
	protected:
		int officergrade;
		string qualification;
	public:
		void setofficergrade(int officergrade);
		int getofficergrade();
		void setqualification(string qualification);
		string getqualification();
		officer();
		~officer();
	    friend istream &operator>>(istream &in,officer&h);
	    friend ostream &operator<<(ostream &out,const officer&h);
};

#endif
