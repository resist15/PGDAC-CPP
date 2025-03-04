#include<iostream>

using namespace std;

void swapReference(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
int main(){
	int a,b;
	cout<<"Enter values of A & B: "<<endl;
	cin >> a >> b;
	swapReference(a,b);
	cout<<"The value of A: "<<a<<endl;
	cout<<"The value of B: "<<b<<endl;
	return 0;
}
