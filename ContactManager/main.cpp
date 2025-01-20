#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string fileaddress = "Contacts.txt";
class Contact
{
private:
    string name;
    string phonenumber;

public:
    Contact() = default;
    Contact(string name, string phonenumber) : name(name), phonenumber(phonenumber)
    {
        std::fstream fs;
        fs.open(fileaddress, std::ios_base::app);
        if (fs.is_open())
        {
            fs << endl
               << name << endl
               << phonenumber << endl;
        }
        else
        {
            std::cerr << "File is not open!" << endl;
        }
        fs.close();
    }
    bool CreateContact(string name, string phonenumber)
    {
        std::fstream fs(fileaddress, std::ios_base::app);
        if (fs.is_open())
        {
            fs << endl
               << name << endl
               << phonenumber << endl;
            return true;
        }
        else
        {
            std::cerr << "File dont open! " << endl;
            return false;
        }
        fs.close();
        return false;
    }
};

int main()
{
    Contact Mira;
    Mira.CreateContact("Miroslava", "+380673398626");
}