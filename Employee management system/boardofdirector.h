#ifndef BOARDOFDIRECTOR_H
#define BOARDOFDIRECTOR_H

#include "officer.h"

class boardofdirector : public officer
{
	protected:
	 string designation;
	public:
		void setdesignation(string desig);
		string getdesig();
		boardofdirector();
		~boardofdirector();
		friend &operator>>(istream &in,boardofdirector&h);
		friend &operator<<(ostream &out,const boardofdirector&h);
	
};

#endif
