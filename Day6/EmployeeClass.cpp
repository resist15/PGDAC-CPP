#include <iostream>
#include <string>

using namespace std;

class Employee{
	int empNo;
	string empName;
	int salary;
	string dept;
	public: 
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
	public: 
	void display(){
		cout<<"The Employee number is: "<<endl;
		cout<<this->empNo<<endl;
		cout<<"The Employee name is: "<<endl;
		cout<<this->empName<<endl;
		cout<<"The Employee salary is: "<<endl;
		cout<<this->salary<<endl;
		cout<<"The Employee dept is: "<<endl;
		cout<<this->dept<<endl;
	}
};

int main(){
	Employee *emp1 = new Employee;
	emp1->accept();
	emp1->display();
	delete emp1;
	return 0;
}
