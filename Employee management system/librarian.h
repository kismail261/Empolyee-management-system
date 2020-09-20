#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include "Staff.h"

class librarian : public Staff
{
	protected:
		string highest_degree;
	public:
		void sethighest_degree(string highest_degree);
		string gethighest_degree();
		librarian();
		~librarian();
		friend istream &operator>>(istream &in,librarian&h);
		friend ostream &operator<<(ostream &out,const librarian&h);
};

#endif
