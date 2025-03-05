#include<iostream>
#include <string>

using namespace std;

void display(string *student, int n){
	for(int i=0;i < n;i++){
		cout<<student[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter number of elements in an array"<<endl;
	cin >> n;
	string student[n];
	for(int i=0;i <n;i++){
		cin>>student[i];
	}
	display(student,n);
	return 0;
}
