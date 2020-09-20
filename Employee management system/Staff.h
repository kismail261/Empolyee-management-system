#ifndef STAFF_H
#define STAFF_H

#include "employee.h"

class Staff : public employee
{
	protected:
		int staffgrade;
	public:
		void setstaffgrade(int staffgrade);
		int getstaffgrade();
		Staff();
		~Staff();
		friend istream &operator>>(istream &in,Staff&h);
		friend ostream &operator<<(ostream &out,const Staff&h);
};

#endif
