#include<iostream>

using namespace std;

int factorial(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	else{
		return n * factorial(n-1);
	}
}
int main(){
	int n;
	cout<<"Enter the number to find factorial"<<endl;
	cin >> n;
	
	for(int i=1;i<=n;i++){

		cout<<factorial(i)<<" ";
	
	}
	return 0;
}
