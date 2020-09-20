#include "librarian.h"
void librarian::sethighest_degree(string highest_degree)
{
	highest_degree=highest_degree;
}
string librarian::gethighest_degree()
{
	return highest_degree;
}
librarian::librarian()
{
//	cout<<"constructor is called"<<endl;
}
librarian::~librarian()
{
	//cout<<"destructor is called;"<<endl;
}
istream &operator>>(istream &in,librarian &h){
	
	librarian *obj;
	in>>*obj;
	return in;         
}

