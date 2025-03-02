#include<iostream>
#include<cmath>

using namespace std;

double compound(double p,double r,double n)
{

double A = p * ((pow((1 + r / 100), n)));
double CI = A - p;
return CI;
}

int main(){
double p,r,n;
cout<<"Enter Principle, ROI, Years"<<endl;
cin>>p>>r>>n>>t;
double result = compound(p,r,n);
cout<<"Compound interest: "<<result;
return 0;
}
