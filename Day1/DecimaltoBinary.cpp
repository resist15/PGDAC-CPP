#include<iostream>
#include<string>
using namespace std;


int converter(int num){
if (num== 0)
{	
return 0;
}
else
{
return (num % 2 + 10 * converter(num/ 2));
}
}
int main(){
int num;
cout<<"Enter decimal numbers: "<<endl;
cin >> num;
cout<<"Result: "<<converter(num)<<endl;
return 0;
}
