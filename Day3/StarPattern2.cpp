#include <iostream>

using namespace std;

int main(){
	int n = 5;
	for(int i = 0;i < 5; i++){
		for(int k = 0; k < i; k++){
			cout<<" ";
		}
		for(int j = n; j > i;j--){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
