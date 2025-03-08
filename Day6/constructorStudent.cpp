#include <iostream>
#include <string>

using namespace std;

class Student{
	private:
	int studentId;
	string studentName;
	int salary;
	string stream;
	public:
	
	Student(): studentId(0), studentName(""), salary(0), stream(""){}
	
	Student(int studentId, string studentName, int salary, string stream){
		this->studentId = studentId;
		this->studentName=studentName;
		this->salary=salary;
		this->stream=stream;
	}
	
	void accept(){
		cout<<"Enter student number "<<endl;
		cin >> this->studentId;
		cout<<"Enter student name "<<endl;
		cin >> this->studentName;
		cout<<"Enter salary"<<endl;
		cin >> this->salary;
		cout<<"Enter the department: "<<endl;
		cin >> this->stream;
	}

	void display() const {
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
	void printThis() const{
		cout<<this<<endl;
	}
};

int main(){
	Student *s1= new Student;
	s1->accept();
	s1->display();

	Student *s2 = new Student(3,"Sourav",12000,"PCB");
	s2->display();
	s2->printThis();
	


	return 0;
}
