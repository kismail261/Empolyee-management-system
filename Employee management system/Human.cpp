#include "Human.h"
using namespace std;
void Human::setage(int age)
{
	age=age;
}
int Human::getage()
{
	return age;
}
void Human::setDOB(string DOB)
{
	DOB=DOB;
}
string Human::getDOB()
{
	return DOB;
}
void Human::setNIC(string NIC)
{
	NIC=NIC;
}
string Human::getNIC()
{
	return NIC;
}
Human::Human()
{
//	cout<<"constructor is called"<<endl;
}

Human::~Human()
{
//	cout<<"destructor is called"<<endl;
}

