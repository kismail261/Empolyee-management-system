#ifndef PURCHASEINCHARGE_H
#define PURCHASEINCHARGE_H

#include "boardofdirector.h"
#include "faculty.h"
class purchaseincharge : public boardofdirector,faculty
{
	protected:
		int inchargeofstore;
		string coursestaken;
	public:
		void setinchargeofstore(int iof);
		int getinchargeofstore();
		void setcoursestaken(string ct);
		string getcoursestaken();
		purchaseincharge();
		~purchaseincharge();
		friend &operator>>(istream &in,purchaseincharge&h);
		friend &operator<<(ostream &out,const purchaseincharge&h);
	
};

#endif
