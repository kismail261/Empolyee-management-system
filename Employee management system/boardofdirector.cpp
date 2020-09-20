#include "boardofdirector.h"
void boardofdirector::setdesignation(string desig)
{
	designation=desig;
}
string boardofdirector::getdesig()
{
	return designation;
}
boardofdirector::boardofdirector()
{
	//cout<<"constructor is called"<<endl;
}

boardofdirector::~boardofdirector()
{
	//cout<<"destructor is called"<<endl;
}
