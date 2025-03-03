#include<iostream>
using namespace std;

int n = 4;

int main(){
int n = 4;
	for(int i = 1; i < n+1; i++){
	
		for(int j = 1; j < (n+1)-i; j++){
		cout<<" ";
		}
		for(int j = 1; j <= (2*i)-1; j ++){
			cout<<"*";
		}
		cout<<endl;
	}
	    for (int i = 1; i < n; i++) { // Start from the second row
        for (int j = 0; j < i; j++) {
            cout << " "; // Print leading spaces
        }
        for (int j = 0; j < (2 * (n - i) - 1); j++) {
            cout << "*"; // Print stars
        }
        cout << endl;
    }
	return 0;
}
/*for(int i =1;i<=n;i++){*/
/*	for(int j = i;j<n;j++){*/
/*		cout<<"+";*/
/**/
/*	}*/
/*	for(int j = 1; j <= (2*i-1);j++){*/
/**/
/*		cout<<"*";*/
/**/
/*	}*/
/*	cout<<endl;*/
/*}*/
/*	for(int i = (n-1);i>=1;i--){*/
/*		for(int j = n;j>i;j--){\*/
/*			cout<<"+";*/
/*		}*/
/*		for(int j = 1;j<=(2*i-1);j++){*/
/*			cout<<"*";*/
/**/
/*		}*/
/*		cout<<endl;*/
/*	}*/
/*return 0;*/
/*}*/
