#include "Complex.h"
#include <iostream>
using namespace std;

int Complex::objectCount = 0;


Complex::Complex() : real(0.0), imaginary(0.0) {
    objectCount++; 
}
Complex::Complex(int r, int i) : real(r), imaginary(i) {
    objectCount++; 
}

void Complex::display() const {
    std::cout << "Complex number: " << real << " + " << imaginary << "i" << std::endl;
}



int Complex::getObjectCount() {
    return objectCount;
}

    
Complex::Complex(const Complex& other) : real(other.real), imaginary(other.imaginary) {
    objectCount++;
   
}
    
Complex::~Complex() {
    objectCount--; 
    cout << "Destructor called. Object count: " << objectCount << endl;
}
//______________________________________________________get-set______________________________________________________________

int Complex::getReal() const {
    return real;
    }

int Complex::getImaginary() const {
    return imaginary;
}

 
void Complex::setReal(int r){
    real = r;
}

void Complex::setImaginary(int i){
    imaginary = i;
}



//_________________________________________________________operator_______________________________________________________

Complex Complex::operator+(const Complex& other)const{
    return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator-(const Complex& other) const{
    return Complex(real - other.real, imaginary - other.imaginary);
}


Complex Complex::operator*(const Complex& other) const{
    int resultReal = (real * other.real) - (imaginary * other.imaginary);
    int resultImaginary = (real * other.imaginary) + (imaginary * other.real);
    return Complex(resultReal, resultImaginary);
}
