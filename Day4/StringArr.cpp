#include <iostream>

using namespace std;

void display(char arr[],int n){

	for(int i = 0; i < n; i++){
		cout<< arr[i];
	}
}

int main(){

	int n;
	cout<<"Enter the size of the array"<<endl;
	cin >> n;
	char arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	display(arr, n);

	return 0;

}
