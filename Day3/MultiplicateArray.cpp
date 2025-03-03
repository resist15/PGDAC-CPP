#include<iostream>

using namespace std;

void multiplyarray(int arr[],int n){
	for(int i = 0; i < n; i++){
		cout<< arr[i]*2<< " ";
	}
}

int main(){
	int n;
	cout<<"Enter the total amount of numbers"<<endl;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	multiplyarray(arr, n);
	return 0;
}
