#include <iostream>
#include "employee.h"

using namespace std;

int main(){
	cout<<"Enter the number of employees"<<endl;
	int n;
	cin >> n;
	Employee emp[n];
	for(int i = 0;i < n;i++){
		emp[i].accept();
	}
	cout<<"===== MENU =======\n1. For Sorting with salary\n2. For Sorting with name\n3. For Sorting with employee number"<<endl;
	int choice;
	cin >> choice;
	switch (choice) {
		case 1:
			sortingSalary(emp, n);
			break;
		case 2:
			sortingName(emp, n);
			break;
		case 3:
			sortingEmpno(emp, n);
		default:
			cout<<"Invalid input"<<endl;
			break;
	}
	sortingName(emp, n);
	return 0;
}
