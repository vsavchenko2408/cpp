#include <iostream>
using namespace std;
bool Size(string str)
{
    if (str.length() >= 4 && str.length() <= 20)
        return true;
    else
        return false;
}
int main() {
    string name;
    cin >> name;
    try {
        if (Size(name) == true)
        {
            cout << "Valid";
        }
        else
        {
            throw(name);
        }
    }
    catch (string name) {
        cout << "Invalid";
    }
    return 0;
}