#include <iostream>
#ifndef POINTERS_H
#define POINTERS_H

using std::cout;
using std::endl;
using std::cin;

class Pointers
{

private:
int x;
int y;

public:
static int count;
//constructors
Pointers();
Pointers(int x, int y);
//Methods
void show()const;
//destructor
~Pointers();
//Operators overload
Pointers operator+(const Pointers& other);
Pointers operator-(const Pointers& other);
Pointers operator*(const Pointers& other);
Pointers operator/(const Pointers& other);
Pointers operator%(const Pointers& other);
bool operator==(const Pointers& other) const;
bool operator<(const Pointers& other) const;
bool operator>(const Pointers& other) const;
};






#endif