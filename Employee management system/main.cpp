#include <iostream>
using namespace std;
#include "human.h"
#include "employee.h"
#include "staff.h"
#include<fstream>
int main() 
{
	int choice;
	
		cout<<"MENU:\n1-ADD\n2-REMOVE\n3-SEARCH\n4-Display list\n5-Exit";
		cin>>choice;
		if(choice==1)
		{
			
				Human h;
				cin>>h;
				ofstream file;
				file.open("backup.txt");
				file<<h<<endl;
				file.close();
				cout<<endl<<endl;
				cout<<h;
		}
		
	return 0;
}

