#include <iostream>
#include <string>

using namespace std;

class Employee{
	public:
	int empNo;
	string empName;
	int salary;
	string dept;
	void accept();
	void display() const;
};
// EMPNO SORT
void sortingEmpno(Employee* const, int);
// SORTBY NAME
void sortingName(Employee* const, int);
// SORTING SALARY
void sortingSalary(Employee [], int);

