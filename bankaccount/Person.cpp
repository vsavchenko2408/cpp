#include "Person.h"


Person::Person(std::string fname, std::string lname, unsigned short age)
{
m_fname = fname; m_lname = lname; m_age = age; ID++;
}

void Person::show_info()
{
std::cout << "ID: " << ID << std::endl;
std::cout << "Name: " << m_fname << " " << m_lname << " " << m_age << " b.year." << std::endl;
}
Person Person::create_person(std::string fname, std::string lname, unsigned short age)
{
    return Person(fname,lname, age);
}
