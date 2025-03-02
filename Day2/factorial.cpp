#include<iostream>

using namespace std;

int factorial(int n){
if(n==0 || n == 1){
return 1;
}
else{
return n * factorial(n-1);
}
}

int main(){
int a;
cout<<"Enter a number"<<endl;
cin >> a;
for(int i = 0;i <= a; i++){
cout<<factorial(i)<<" ";
}
return 0;
}
