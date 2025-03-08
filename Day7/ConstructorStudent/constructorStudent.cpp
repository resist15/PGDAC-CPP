#include <iostream>
#include <string>
#include "student.h"

using namespace std;

Student::Student(): studentId(0), studentName(""), salary(0), stream(""){}

Student::Student(int studentId, string studentName, int salary, string stream){
	this->studentId = studentId;
	this->studentName=studentName;
	this->salary=salary;
	this->stream=stream;
}

void Student::accept(){
	cout<<"Enter student number "<<endl;
	cin >> this->studentId;
	cout<<"Enter student name "<<endl;
	cin >> this->studentName;
	cout<<"Enter salary"<<endl;
	cin >> this->salary;
	cout<<"Enter the department: "<<endl;
	cin >> this->stream;
}

void Student::display() const{
	cout<<"=========================="<<endl;
	cout<<"The Student number is: ";
	cout<<this->studentId<<endl;
	cout<<"The Student name is: ";
	cout<<this->studentName<<endl;
	cout<<"The Student salary is: ";
	cout<<this->salary<<endl;
	cout<<"The Student stream is: ";
	cout<<this->stream<<endl;
}
void Student::printThis() const{
	cout<<this<<endl;
}
