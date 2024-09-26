#include <iostream>
#include "Person.h"
#include "Account.h"
int Person::ID = 0;
int main()
{

Person f;
f.show_info();
Person a = f.create_person("John", "Smith", 1970);


}