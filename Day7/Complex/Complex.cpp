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