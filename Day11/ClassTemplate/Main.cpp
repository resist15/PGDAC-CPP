#include<iostream>
#include "ClassTemplate.h"

using namespace std;
int main()
{
	Array<int> a(2);
	a[0] = 10;
	a[1] = 20;
	cout<<"\n Value="<<a[0];//internally ref of p[0]
	cout<<"\n Value="<<a[1];//internally ref of p[1]
	Array<double> b(3);
	b[0]=1.0;
	b[1]=3.5;
	cout<<"\n Value="<<b[0];//internally ref of p[0]
	cout<<"\n Value="<<b[1];//internally ref of p[1]
	Array<char> c(2);
	c[0] = 'a';
	c[1] = 'b';
	cout<<"\n Value="<<c[0];//internally ref of p[0]
	cout<<"\n Value="<<c[1];//internally ref of p[1]
	Array<float> f(3);
	f[0]=1.0f;
	f[1]=3.5f;
	cout<<"\n Value="<<f[0];//internally ref of p[0]
	cout<<"\n Value="<<b[1];//internally ref of p[1]
	
	return 0;
}
