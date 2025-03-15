#include <iostream>
#include <cstring>
#include <fstream>
#include "MobilePhone.h"

using namespace std;

MobilePhone::MobilePhone():serialNo(0),modelNo(0),price(0){
	brandName[0] = '\0';
};

MobilePhone::MobilePhone(double serialNo,double modelNo, double price): serialNo(serialNo),modelNo(modelNo),price(price){
	strncpy(this->brandName, brandName, sizeof(brandName) - 1);
};

void MobilePhone::Accept(){
	cout<<"Enter Device's serial number: ";
	cin >> this->serialNo;
	cout<<"Enter Device's model number; ";
	cin >> this->modelNo;
	cout<<"Enter Device's brand name; ";
	cin >> this->brandName;
	cout<<"Enter Device's price: ";
	cin >> this->price;
}

void MobilePhone::Display() const{
	cout<<"Device's serial number is: "<<this->serialNo<<endl;
	cout<<"Device's model number is: "<<this->modelNo<<endl;
	cout<<"Device's brand name is: "<<this->brandName<<endl;
	cout<<"Device's price is: "<<this->price<<endl;
}

void writer(MobilePhone* arr,int totalwrites,const char *filename){
	ofstream fout(filename, ios::binary | ios::app);
	if (!fout) {
		cout << "Could not open file." << endl;
	}else {
		for(int i=0;i<totalwrites;i++){
			fout.write((char*)&arr[i], sizeof(MobilePhone));
		}
	}
	fout.close();
}

void reader(const char* filename, int totalreads, MobilePhone *arr){
	ifstream fin(filename, ios::binary);
	if (!fin) {
	    cout << "Error opening file for reading." << endl;
	}
	
	int testcounter = 0;
	MobilePhone temp;
	while (fin.read((char*)&temp, sizeof(MobilePhone))) {
	    arr[testcounter] = temp;
	    testcounter++;
	}
	for(int i = 0;i < testcounter;i++){
		cout<<"====================="<<endl;
		arr[i].Display();
	}
}

void sortedbyPrice(MobilePhone *arr, int totalPhones){
	if(arr){
		for(int i = 0; i < totalPhones; i++){
			for(int j = i+1 ; j < totalPhones; j++ ){
				if(arr[i].price > arr[j].price){
					MobilePhone temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}
	}
	else{
		cout<<"Cant sort and empty array"<<endl;
	}
}


