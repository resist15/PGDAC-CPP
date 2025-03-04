#include <iostream>

using namespace std;

void reverseString(char str[],int n){
	int left = 0;
	int right = n-1;
	while(left < right){
		int temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}
}

void reverseStringRecursion(char str[],int left, int right){
	if(left >= right){
		return;
	}else{
		int temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		reverseStringRecursion(str, left+1, right-1);
	}
	
}
int main(){
	char str[] = "sourav";
	int n = sizeof(str)-1;
	reverseString(str, n);
	for(int i = 0; i < n;i++){
		cout<<str[i]<<endl;
	}
	return 0;
}
