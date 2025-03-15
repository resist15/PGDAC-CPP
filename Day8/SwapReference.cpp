#include <iostream>

using namespace std;

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int a,b;
	cout<<"enter two numbers"<<endl;
	cin >> a >> b;
	swap(a,b);
	cout<<"swapped values are "<<a<<" "<<b<<endl;
	return 0;
}
