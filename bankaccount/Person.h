#include <iostream>
#ifndef PERSON_H
#define PERSON_H
class Person
{

std::string m_fname;
std::string m_lname;
unsigned short m_age;
public:
    static int ID;
Person():m_fname("noone"),m_lname("nobody"),m_age(1900){ID++;}
Person(std::string fname, std::string lname, unsigned short age);
void show_info();
Person create_person(std::string fname, std::string lname, unsigned short age);

};

#endif