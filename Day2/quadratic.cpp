#include<iostream>
#include<cmath>

using namespace std;

bool isRootreal(int a,int b, int c){
	int val = (b*b) - (4*a*c);
	if(val < 0){
		cout<<"Roots are no real"<<endl;
		return false;
	}else{
		cout<<"Roots are real"<<endl;
		return true;
	}

}

void solveQuad(int a,int b, int c){

	double x1 = ((-b) + (pow((b*b)-(4*a*c),0.5)))/float(2*a*b);
	double x2 = ((-b) - (pow((b*b)-(4*a*c),0.5)))/float(2*a*b);
	cout<<"The value of root are "<<x1<<" and "<<x2<<endl;
}
int main(){

	cout<<"Enter coefficients of quadratic equation"<<endl;
	int a,b,c;
	cin>>a>>b>>c;
	if(isRootreal(a,b,c)){
		solveQuad(a,b,c);
	}
	return 0;
}
