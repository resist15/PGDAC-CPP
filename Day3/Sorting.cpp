#include <iostream>

using namespace std;


void display(int arr[],int n){

	for(int i = 0; i < n; i++){
		cout<< arr[i]<< " ";
	}

}

void sorting(int arr[], int n){

	for(int i = 0; i < n; i++){
		for(int j = i+1 ; j < n; j++ ){
			if(arr[i] > arr[j]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	display(arr,n);	

}

int main(){
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	sorting(arr, n);
	return 0;
}
