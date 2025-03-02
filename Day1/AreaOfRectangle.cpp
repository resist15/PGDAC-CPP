#include<iostream>

using namespace std;

int area(int l, int b){
return l*b;
}
int main(){
int l,b;
cout<<"Enter the length and breadth"<<endl;
cin>>l>>b;
cout<<"Area of rectangle: "<<area(l,b)<<endl;
return 0;
}
