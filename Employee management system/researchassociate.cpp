#include "researchassociate.h"
void researchassociate::setnamesofcousrsesassisted(int noca)
{
	namesofcoursesassisted=&noca;
}

void researchassociate::settoatalcourses(int tc)
{
	totalcourses=&tc;
}

researchassociate::researchassociate(int a,int b)
{
	namesofcoursesassisted=new int[a];
	totalcourses=new int[b];
}

researchassociate::~researchassociate()
{

}
