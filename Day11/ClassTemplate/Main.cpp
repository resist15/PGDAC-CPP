#include<iostream>
using namespace std;
int main()
{
	Array a(2);
	a[0] = 10;
//	a.operator[](0)= 10;
	a[1] = 20;
	cout<<"\n Value="<<a[0];//internally ref of p[0]
	cout<<"\n Value="<<a[1];//internally ref of p[1]

	return 0;
}
