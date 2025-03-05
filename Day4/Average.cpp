#include <iostream>

using namespace std;

int average(int arr[],int n){
	int avg = 0;
	int sum = 0;

	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	avg = sum / n;
	return avg;
}

int main(){
	int n;
	cout<<"Enter the total amount of numbers"<<endl;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	cout << "Average is: "<<average(arr, n)<<endl;
	return 0;
}
