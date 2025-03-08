#include <iostream>
#include <string>

using namespace std;

class Account{
	public:
	int accNo;
	string name;
	int amount;
	Account(): accNo(0),name(""),amount(0){}

	Account(int accNo, string name, int amount){
		this->accNo = accNo;
		this->name = name;
		this->amount = amount;
	}
	
	void accept(){
		cout<<"Enter account number "<<endl;
		cin >> this->accNo;
		cout<<"Enter account name "<<endl;
		cin >> this->name;
		cout<<"Enter amount"<<endl;
		cin >> this->amount;
	}
	void display() const {
		cout<<"=========================="<<endl;
		cout<<"The account number is: ";
		cout<<this->accNo<<endl;
		cout<<"The account name is: ";
		cout<<this->name<<endl;
		cout<<"The account amount is: ";
		cout<<this->amount<<endl;
	}
	void withdraw(){
		cout<<"Enter amount to withdraw"<<endl;
		unsigned int inputamount;
		cin >> inputamount;
		if(amount > inputamount){
			amount = amount - inputamount;
		}else{
			cout<<"Not enough balance amount"<<endl;
		}
		cout<<"The Balance amount left is :"<<amount<<endl;
	}
	void deposit(){
		cout<<"Enter amount to deposit"<<endl;
		unsigned int inputamount;
		cin >> inputamount;
		amount = amount + inputamount;
		cout<<"the balance amount left is :"<<amount<<endl;
	}
	void printThis() const{
		cout<<this<<endl;
	}
};

int findAcc(Account *acc,int n){
	int findAccount;
	int res = 0;
	cout<<"enter account number"<<endl;
	cin >> findAccount;
	for(int i = 0;i < n;i++){
		if(acc[i].accNo == findAccount){
			res = i;
			break;
		}
		
		res = -1;
	}
	return res;
}
int main(){
	cout<<"Enter the number of accounts"<<endl;
	int n;
	cin >> n;
	Account *acc = new Account[n];
	for(int i = 0;i < n;i++){
		acc[i].accept();
	}
	cout<<"enter the operation to perform\n1. withdraw\n2.deposit"<<endl;
	int choice;
	cin >> choice;
	int found = findAcc(acc, n);
	if(found > -1){
	switch (choice) {
		case 1:
			acc[found].withdraw();
			break;
		case 2:
			acc[found].deposit();
			break;
		default:
			cout<<"invalid input"<<endl;
			break;
	}
	}
	else{
		cout<<"account doesnt exist"<<endl;
	}
	delete[] acc;
	return 0;
}
