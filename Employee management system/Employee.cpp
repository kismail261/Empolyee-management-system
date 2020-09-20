#include "employee.h"
void employee::setemployee_id(int employee_id)
{
	employee_id=employee_id;
}
int employee::getemployee_id()
{
	return employee_id;
}
void employee::setDOJ(string DOJ)
{
	DOJ=DOJ;
}
string employee::getDOJ()
{
	return DOJ;
}
void employee::setexperience(int experience)
{
	experience=experience;
}
int employee::getexperience()
{
	return this->expirience;
}
void setsalary(int salary)
{
   salary=salary;
}
int employee::getsalary()
{
	return salary;
}
employee::employee()
{
	//cout<<"constructor is called"<<endl;
}
employee::~employee()
{
	//cout<<"destructor is called"<<endl;
}
