#include "professor.h"
void professor::setnumberofphdstudents(int numberofphdstudents)
{
	numberofphdstudents=numberofphdstudents;
}
int professor::getnumberofphdstudents()
{
	return numberofphdstudents;
}
professor::professor()
{
	cout<<"constructor is called"<<endl;
}
professor::~professor()
{
	cout<<"destructor is called"<<endl;
}
