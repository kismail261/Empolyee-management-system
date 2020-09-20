#include "faculty.h"
void faculty::setareaofresearch(int areaofresearch)
{
	areaofresearch=areaofresearch;
}
int faculty::getareaofresearch()
{
	return areaofresearch;
}
void faculty::setnumberofpublications(int numberofpublications)
{
	numberofpublications=numberofpublications;
}
int faculty::getnumberofpublications()
{
	return numberofpublications;
}
void faculty::setdepartment(int department)
{
	department=department;
}
int faculty::getdepartment()
{
	return department;
}
faculty::faculty()
{
	cout<<"constructor is called"<<endl;
}

faculty::~faculty()
{
	cout<<"destructor is called"<<endl;
}
