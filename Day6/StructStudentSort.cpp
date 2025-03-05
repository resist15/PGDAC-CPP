#include <iostream>

using namespace std;

struct Student{
	string name;
	int age;
	int rollno;
};

// Bubble sort
void sorting(Student * const arr, int n){
	for(int i = 0; i < n; i++){
		for(int j = i+1 ; j < n; j++ ){
			if(arr[i].rollno > arr[j].rollno){
				Student temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

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
	sorting(students, num);
	display(students, num);
	return 0;
}
