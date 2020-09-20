#ifndef DRIVER_H
#define DRIVER_H

#include "staff.h"

class Driver : public Staff
{
	protected:
		string license;
	public:
		void setlicense(string license);
		string getlicense();
		Driver();
		~Driver();
		friend istream &operator>>(istream &in,Driver&h);
		friend ostream &operator<<(ostream &out,const Driver&h);
};

#endif
