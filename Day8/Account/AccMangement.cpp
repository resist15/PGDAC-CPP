#include <iostream>
#include <string>
#include "account.h"

using namespace std;

Account::Account():accNo(accNoCounter),name(""),amount(0){
	accNoCounter++;
}

Account::Account(int accNo, string name, int amount): accNo(accNoCounter),name(name),amount(amount){
	this->accNo = accNo;
	this->name = name;
	this->amount = amount;
	accNoCounter++;
}

void Account::accept(){
	cout<<"Enter account name "<<endl;
	cin >> this->name;
	cout<<"Enter amount"<<endl;
	cin >> this->amount;
}
void Account::display() const {
	cout<<"=========================="<<endl;
	cout<<"The account number is: ";
	cout<<this->accNo<<endl;
	cout<<"The account name is: ";
	cout<<this->name<<endl;
	cout<<"The account amount is: ";
	cout<<this->amount<<endl;
}
void Account::withdraw(){
	cout<<"Enter amount to withdraw"<<endl;
	unsigned int inputamount;
	cin >> inputamount;
	if(amount > inputamount){

	amount = amount - inputamount;
	}else{
		cout<<"not enough balance amount"<<endl;
	}
	cout<<"the balance amount left is :"<<amount<<endl;
}
void Account::deposit(){
	cout<<"Enter amount to deposit"<<endl;
	unsigned int inputamount;
	cin >> inputamount;
	amount = amount + inputamount;
	cout<<"the balance amount left is :"<<amount<<endl;
}
void Account::printThis() const{
	cout<<this<<endl;
}

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
