#include <iostream>

using namespace std;

struct Student{
	string name;
	int age;
	int rollno;
};

void display(const Student* const arr, int num){
	for(int i = 0;i < num; i++){
		cout<<"=================="<<endl;
		cout<<"Students name: ";
		cout<< arr[i].name<<endl;
		cout<<"Students rollno: ";
		cout<< arr[i].rollno<<endl;
		cout<<"Students age: ";
		cout<< arr[i].age<<endl;
	}
}

void accept(Student * const arr, int num){
	for(int i = 0;i < num; i++){
		cout<<"Enter Students name"<<endl;
		cin >> arr[i].name;
		cout<<"Enter students rollno"<<endl;
		cin >> arr[i].rollno;
		cout<<"Enter the age of student"<<endl;
		cin>> arr[i].age;
	}
}

int main(){
	cout<<"Enter size of an array"<<endl;
	int num;
	cin >> num;
	Student students[num];
	accept(students, num);
	display(students, num);
	return 0;
}
