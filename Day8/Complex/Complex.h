#ifndef ________COMPLEX_H__________________
#define ________COMPLEX_H__________________




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
    ~Complex();
    void setReal(int real);
    void setImaginary(int imaginary); 
    int getReal()const;
    int getImaginary()const; 
    
    Complex(const Complex &other);
    
    Complex operator+(const Complex& other)const;
    Complex operator-(const Complex& other)const;
    Complex operator*(const Complex& other)const;

    static int getObjectCount();
};

#endif
