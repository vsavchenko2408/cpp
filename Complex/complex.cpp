#include "complex.h"
#include <iostream>
Complex::Complex()
{
    real = 0;
    imag = 0;
}

Complex::Complex(int _real)
{
    real = _real;
    imag = 0;
}

Complex::Complex(int _real, int _imag)
{
    real = _real;
    imag = _imag; 
}

void Complex::show() const
{
    std::cout << "Real: " << this->real << std::endl;
    std::cout << "Imag: " << this->imag << std::endl;
}


Complex Complex::operator+(Complex& obj)
{
this->real += obj.real;
this->imag += obj.real;
return *this;
}

Complex Complex::operator-(Complex& obj)
{
this->real -= obj.real;
this->imag -= obj.real;
return *this;
}

Complex Complex::operator*(Complex& obj)
{
this->real *= obj.real;
this->imag *= obj.real;
return *this;
}

Complex Complex::operator/(Complex& obj)
{
this->real /= obj.real;
this->imag /= obj.real;
return *this;
}

Complex Complex::operator=(Complex& obj)
{
this->real = obj.real;
this->imag = obj.real;
return *this;
}