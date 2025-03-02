#include<iostream>

using namespace std;

int main()
{
int power,number,result;
cout<<"Enter a number"<<endl;
cout<<"Enter power"<<endl;
cin>>number>>power;

result=1;
for(int i = 1;i <= power;i++){
	result = result*number;
}
cout<<"Result: "<<result<<endl;
return 0;

}
