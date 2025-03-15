#include <iostream>
#include "account.h"

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
