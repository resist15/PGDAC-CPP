#include <string>

using namespace std;

class Account{
	public:
	int accNo;
	string name;
	int amount;
	static int accNoCounter;

	Account();
	Account(int,string,int);
	
	void accept();
	void display() const;
	void withdraw();
	void deposit();
	void printThis() const;
};

int findAcc(Account*,int);
