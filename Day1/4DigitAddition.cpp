#include<iostream>

using namespace std;

// recursion
int recur(int num){
	if(num == 0){
	return 0;
	}
	else
	{
	return recur(num/10) + (num %10);
	}
}

// with loop
int summation(int num ){
	int remainder;
	int quotient;
	int result = 0;
	while(num > 0){
	quotient = num / 10;
	remainder = num % 10;
	num = num / 10;
	result = result + remainder;
	}
	return result;
}

int main(){
int num;
cout<<"Enter the 4 digit nunber"<<endl;
cin >> num;
cout<<"Result: "<<recur(num)<<endl;
return 0;
}
