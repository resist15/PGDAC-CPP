

#include<iostream>
#include<string>
using namespace std;

string Compare(char a){
if (a >= 65 && a<=90){
return "capital";
}
else if (a>=97 && a <= 122){
return "small";
} 
else{
return "invalid";
}
}
int main(){
char a;
cout<<"enter your character: "<<endl;
cin>>a;

string b= Compare(a);
cout<<"result is : "<<b;


return 0;
}
