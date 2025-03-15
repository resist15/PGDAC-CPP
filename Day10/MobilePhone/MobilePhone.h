#ifndef __MOBILE_PHONE__
#define __MOBILE_PHONE__

#include <string>

using namespace std;

class MobilePhone {
	private:
	double serialNo;
	double modelNo;
	char brandName[50];
	public:
	double price;
	MobilePhone();
	MobilePhone(double,double,double);
	void Accept();
	void Display() const;
};

void reader(const char*,int,MobilePhone*);
void writer(MobilePhone*,int,const char*);
void sortedbyPrice(MobilePhone*,int);

#endif
