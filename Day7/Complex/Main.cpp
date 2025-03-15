#include "Complex.h"
#include <iostream>
using namespace std;
int main() {
   
    Complex c1(3,6);
    c1.display();

   
    Complex c2(3, 4);
    c2.display();

    
    Complex c3 = c2;
    c3.display();


  
    cout << "Total objects created: " << Complex::getObjectCount() << endl;

    return 0;
}