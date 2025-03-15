#include<iostream>
class Complex {
private:
    int real;       
    int imaginary;  
    static int objectCount; 
public:
 
    Complex();
    Complex(int r, int i);
    void display() const;

    static int getObjectCount();
};

