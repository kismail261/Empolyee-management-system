#include<iostream>
#ifndef CONTACT_H
#define CONTACT_H
using namespace std;
class contact
{
	public:
		void setphno(double phno);
		double getphno();
		void setemail(string email);
		string getemail();
		void setpresent_address(string present_address);
		string getpresent_address();
		void setpermanent_address(string permanent_address);
		string getpermanent_address();
		contact();
		~contact();
		friend istream &operator>>(istream &in,contact&h);
		friend ostream &operator<<(ostream &out,const&h);
	protected:
		double phno;
		string email;
		string present_address,permanent_address;
		 
};

#endif
