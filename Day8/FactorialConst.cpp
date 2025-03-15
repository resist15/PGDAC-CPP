#include <iostream>

using namespace std;

int factorial(int const &n){
	if(n == 1 || n == 0){
		return 1;
	}
	return n*factorial(n-1);
}

int main(){
	int n;
	int &r = n;
	cout<<"Enter the value of n: "<<endl;
	cin >> n;
	cout<<"Factorial of n is: "<<factorial(r)<<endl;
	cout<<n<<endl;
	return 0;
}
