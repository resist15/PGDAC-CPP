#include <iostream>
#include <string>

using namespace std;

class Employee{
	public:
	int empNo;
	string empName;
	int salary;
	string dept;
	void accept(){
		cout<<"Enter employee number "<<endl;
		cin >> this->empNo;
		cout<<"Enter employee name "<<endl;
		cin >> this->empName;
		cout<<"Enter salary"<<endl;
		cin >> this->salary;
		cout<<"Enter the department: "<<endl;
		cin >> this->dept;
	}
	void display() const {
		cout<<"=========================="<<endl;
		cout<<"The Employee number is: ";
		cout<<this->empNo<<endl;
		cout<<"The Employee name is: ";
		cout<<this->empName<<endl;
		cout<<"The Employee salary is: ";
		cout<<this->salary<<endl;
		cout<<"The Employee dept is: ";
		cout<<this->dept<<endl;
	}
};

// EMPNO SORT
void sortingEmpno(Employee* const arr, int n){
	cout<<"========Sorting by Employee Number======="<<endl;
	for(int i = 0; i < n; i++){
		for(int j = i+1 ; j < n; j++ ){
			if(arr[i].empNo > arr[j].empNo){
				Employee temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
// SORTBY NAME
void sortingName(Employee* const arr, int n){
	cout<<"========Sorting by Employee Name======="<<endl;
	int k = 0;
	for(int i = 0; i < n; i++){
		for(int j = i+1 ; j < n; j++ ){

			if(arr[i].empName[k] == arr[j].empName[k]){
				k++;
			}
			if(arr[i].empName[k] > arr[j].empName[k]){
				Employee temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
// SORTING SALARY
void sortingSalary(Employee* const arr, int n){
	cout<<"========Sorting by Employee Salary======="<<endl;
	for(int i = 0; i < n; i++){
		for(int j = i+1 ; j < n; j++ ){
			if(arr[i].salary > arr[j].salary){
				Employee temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
		
	}
	for(int i = 0;i < n;i++){
		arr[i].display();
	}
}

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
