#include<iostream>
#ifndef HUMAN_H
#define HUMAN_H
#include<string.h>
#include "contact.h"
using namespace std;
class Human
{
	protected:
		int age;
		string DOB;
		string NIC;
		contact c;
		public:
			friend class contact;
			void setage(int age);
			int getage();
			void setDOB(string DOB);
			string getDOB();
			void setNIC(string NIC);
			string getNIC();
			Human();
			~Human();
			friend istream &operator>>(istream&in,Human&h);
			friend ostream &operator<<(ostream&out,const Human&h);
};

#endif
