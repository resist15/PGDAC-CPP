#include<iostream>

using namespace std;

int addRecursion(int a){
if(a ==0){
	return 0;
}
else{
	return a + addRecursion(a-1);
}
}
int main(){
cout<<"Enter a number"<<endl;
int num;
cin >> num;
cout<<"The addition of n numbers is "<<addRecursion(num)<<endl;
return 0;
}
