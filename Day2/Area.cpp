#include<iostream>
using namespace std;


float areaCircle(int a){
return 3.14*a*a;
}

float areaSquare(int length,int breadth){
return length*breadth;
}

int main(){
	int a;
	cout<<"1. Circle\n2.Rectangle\n3.Square"<<endl;
	cin >> a;
	switch(a){
		case 1:
			int radius;
			cout<<"Enter radius for circle"<<endl;
			cin >> radius;
			cout<<"the area for circle is"<<areaCircle(radius)<<endl;
			break;
			
		case 2:
			int length,breadth;
			cout<<"Enter length and breadth"<<endl;
			cin >> length >> breadth;
			cout<<"Area of reactangle: "<<areaSquare(length,breadth)<<endl;
			break;

		case 3:
			int side;
			cout<<"Enter side of square"<<endl;
			cin >> side;
			cout<<"Area of square: "<<areaSquare(side,side)<<endl;
			break;
		default:
			cout<<"Invalid input"<<endl;
			break;
	}
	return 0 ;
}
