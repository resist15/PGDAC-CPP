#include<iostream>

using namespace std;


void swap(int a, int b){
int temp;
temp = a;
a = b;
b = temp;
cout<<"swapped numbers a: "<<a<<" b: "<<b<<endl;
}

int main(){
int a,b;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
cout<<"Current numbers a: "<<a<<" b: "<<b<<endl;
swap(a,b);
return 0;
}
