#ifndef GARDNER_H
#define GARDNER_H

#include "staff.h"

class Gardner : public Staff
{
	protected:
		int dutyhours;
	public:
		void setdutyhours(int dutyhours);
		int getdutyhours();
		Gardner();
		~Gardner();
		friend istream &operator>>(istream &in,Gardner&h);
		friend ostream &operator<<(ostream &out,const Gardner&h);
	
};

#endif
