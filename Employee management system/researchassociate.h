#ifndef RESEARCHASSOCIATE_H
#define RESEARCHASSOCIATE_H

#include "faculty.h"

class researchassociate : public faculty
{
	
		protected:
		int *namesofcoursesassisted;
		int *totalcourses;
		public:
			void setnamesofcousrsesassisted(int noca);
			void settoatalcourses(int tc);
		researchassociate(int a,int b);
		~researchassociate();
		friend istream &operator>>(istream &in,researchassociate&h);
		friend ostream &operator<<(ostream &out,const researchassociate&h);
	
};

#endif
