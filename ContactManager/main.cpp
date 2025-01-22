#include <iostream>
#include <fstream>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::make_pair;
using std::map;
using std::string;
string fileaddress = "Contacts.txt";
std::fstream fs;
class Contact
{
private:
    map<string, string> contacts;

public:
    Contact()
    {
        contacts.emplace("noname", "empty");
    }
    Contact(string name, string number)
    {
        contacts.emplace(name, number);
    }
    void create_contact(string name, string number)
    {
        contacts.emplace(name, number);
    }
    void to_file()
    {
        fs.open(fileaddress, std::ios_base::out);
        if (fs.is_open())
        {
            for (const auto &i : contacts)
            {
                fs << i.first << endl;
                fs << i.second << endl;
            }
            fs.close();
        }
        else
        {
            std::cerr << "File dont open!" << endl;
        }
    }
};

int main()
{
    Contact Mira("Miroslava", "+380673398626");
    Contact Viacheslav("Viacheslav", "+380977087929");
    Viacheslav.to_file();
    Mira.to_file();
}