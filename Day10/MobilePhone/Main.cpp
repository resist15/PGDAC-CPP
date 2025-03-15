#include "MobilePhone.h"
#include <iostream>
using namespace std;

int main(){
	int choice = 0;
	int totalPhones = 0;
	char filename[100];
	cout<<"Enter filename: ";
	cin>> filename;

	cout<<"Enter total number of mobile phones: "<<endl;

	cin >> totalPhones;
	MobilePhone *mobileArr = new MobilePhone[totalPhones];
	
	while(choice!=5){
		cout<<"Enter your choice :\n1. Accepting Data and writing to the file\n2. Reading the existing data from the file\n3. Sort the array by price\n4. Display the array\n5. Press 5 to exit"<<endl;
		cin >> choice;
		switch (choice) {
			case 5:
				exit(0);
				break;
			case 1:
				for(int i = 0; i < totalPhones;i++){
					cout<<"================================"<<endl;
					cout<<"Enter data for the "<<i+1<<" phone"<<endl;
					mobileArr[i].Accept();
				}
				cout<<"Writing Data to the file"<<endl;
				writer(mobileArr, totalPhones, filename);
				break;
			case 2:
				cout<<"Reading Data from the file"<<endl;
				reader(filename, totalPhones, mobileArr);
				break;
			case 3:
				sortedbyPrice(mobileArr,totalPhones);
				cout<<"Array sorted successfully"<<endl;
				break;
			case 4:
				for(int i = 0;i<totalPhones;i++){
					cout<<"=================================="<<endl;
					mobileArr[i].Display();
				}
				break;
			default:
				cout<<"Invalid input"<<endl;
				break;
		}
	}
	delete [] mobileArr;
	return 0;
}
