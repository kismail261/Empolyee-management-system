#ifndef OFFICEBOY_H
#define OFFICEBOY_H

#include "staff.h"

class officeboy : public Staff
{
	protected:
		string shift;
	public:
		void setshift(string shift);
		string getshift();
		officeboy();
		~officeboy();
		friend istream &operator>>(istream &in,officeboy&h);
		friend ostream &operator<<(ostream &out,const officeboy&h);
};

#endif
