#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Human.h"

class employee:public Human{
	protected:
		int employee_id;
		string DOJ;
		int expirience;
		int salary;
	public:
		void setemployee_id(int employee_id);
		int getemployee_id();
		void setDOJ(string DOJ);
		string getDOJ();
		void setsalary(int salary);
		int getsalary();
		void setexperience(int experience);
		int getexperience();
		employee();
		~employee();
		friend istream &operator>>(istream &in,employee&h);
		friend ostream &operator<<(ostream &out,const employee&h);
};

#endif
