#include<iostream>
using namespace std;

int main(){

int n = 5;

for(int i = 0;i < n;i++){
	for(int j = n; j > i; j--){
		cout<<"*";
	}
	for(int k = 0; k < 2*i; k++){
		cout<<" ";
	}
	for(int j = n; j > i; j--){
		cout<<"*";
	}
	
	cout<<endl;
	}
for(int i = 1;i < n;i++){
	for(int j = 0; j < i+1; j++){
		cout<<"*";
	}
	for(int k = 0; k < 2*(n-i-1); k++){
		cout<<" ";
	}
	for(int j = 0; j < i+1; j++){
		cout<<"*";
	}
	cout<<endl;
}
return 0;
}
