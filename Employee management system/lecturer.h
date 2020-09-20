#ifndef LECTURER_H
#define LECTURER_H

#include "faculty.h"

class lecturer : public faculty
{
	protected:
		int *namesofcoursestaught;
		int *totalcourses;
	public:
		void setnamesofcoursestaught(int namesofcoursestaught);
		void settotalcourses(int totalcourses);
		//lecturer();
		lecturer(int n, int m);
		~lecturer();
		friend istream&operator>>(istream &in,lecturer&h);
		friend ostream&operator<<(ostream &out,const lecturer&h);
};

#endif
