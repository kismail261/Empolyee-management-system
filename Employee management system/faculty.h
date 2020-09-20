#ifndef FACULTY_H
#define FACULTY_H
#include "officer.h"

class faculty : public officer
{
	protected:
		int areaofresearch,numberofpublications,department;
	public:
		void setareaofresearch(int areaofresearch);
		int getareaofresearch();
		void setnumberofpublications(int numberofpublications);
		int getnumberofpublications();
		void setdepartment(int department);
		int getdepartment();
		faculty();
		~faculty();
		friend istream &operator>>(istream &in,faculty&h);
		friend ostream &operator<<(ostream &out,const faculty&h);
};

#endif
