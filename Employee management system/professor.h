#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "faculty.h"

class professor : public faculty
{
	protected:
		int numberofphdstudents;
	public:
		void setnumberofphdstudents(int numberofphdstudents);
		int getnumberofphdstudents();
		professor();
		~professor();
		friend istream &operator>>(istream &in,professor&h);
		friend ostream&operator<<(ostream &out,const professor&h);	
   };

#endif
