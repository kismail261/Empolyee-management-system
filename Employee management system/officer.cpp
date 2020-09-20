#include "officer.h"
void officer::setofficergrade(int officergrade)
{
	officergrade=officergrade;
}
int officer::getofficergrade()
{
	return officergrade;
}
void officer::setqualification( string qualification)
{
	qualification=qualification;
}
string officer::getqualification()
{
	return qualification;
}
officer::officer()
{
	cout<<"constructor is called"<<endl;
}

officer::~officer()
{
	cout<<"destructor is called"<<endl;
}
