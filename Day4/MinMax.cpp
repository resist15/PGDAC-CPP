#include <iostream>

using namespace std;


void display(int arr[],int n){
	
	cout<<"MIN: "<<arr[0]<<endl;
	cout<<"SecondMIN: "<<arr[1]<<endl;

	cout<<"MAX: "<<arr[n-1]<<endl;
	cout<<"SecondMAX: "<<arr[n-2]<<endl;
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
