#include <string>
#include "student.h"
using namespace std;

int main(){
	Student *s1= new Student;
	s1->accept();
	s1->display();

	Student *s2 = new Student(3,"Sourav",12000,"PCB");
	s2->display();
	s2->printThis();

	return 0;
}
