#include "lecturer.h"
void lecturer::setnamesofcoursestaught(int namesofcoursestaught)
{
	namesofcoursestaught=namesofcoursestaught;
}

void lecturer::settotalcourses(int totalcourses)
{
	totalcourses=totalcourses;
}
/*
lecturer::lecturer()
{
}*/
lecturer::lecturer(int n, int m)
{
	namesofcoursestaught=new int[n];
	totalcourses=new int[m];
}

lecturer::~lecturer()
{
	cout<<"destructor is called"<<endl;
}
