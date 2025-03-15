#include "TemplateDay11.h"
#include <iostream>

using namespace std;

int main()
{ 
	double p=10.20, k=0.10;
	Swap(p,k);
	cout<<"\nSwapped double variables"<<p<<" "<<k;
	int a=10, b=0;
	Swap(a,b);
	cout<<"\nSwapped int variables"<<a<<" "<<b;
	cout<<"Addition of double: "<<Add(p, k)<<endl;
	cout<<"Addition of int: "<<Add(a, b)<<endl;
	cout<<"Substraction of double: "<<Subtract(p, k)<<endl;
	cout<<"Substraction of int: "<<Subtract(a, b)<<endl;
	cout<<"Multiplication of double: "<<Multiply(p, k)<<endl;
	cout<<"Multiplication of int: "<<Multiply(a, b)<<endl;
	cout<<"Division of double: "<<Divide(p, k)<<endl;
	cout<<"Division of int: "<<Divide(a, b)<<endl;
	return 0;
}

