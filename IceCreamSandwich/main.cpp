
#include <iostream>
#include <string>

bool isIcecreamSandwich(const std::string& str) {
    int length = str.length();

    
    if (length < 3) {
        return false;
    }

    
    if (str[0] != str[length - 1]) {
        return false;
    }

    int differentCharsCount = 0; 

    for (int i = 1; i < length - 1; i++) {
        if (str[i] != str[0]) {
            differentCharsCount++;
        }
    }

    
    return differentCharsCount == 0;
}

int main() {
    setlocale(LC_ALL, "RU");
    std::string str;

    std::cout << "������� ������: ";
    std::cin >> str;

    if (isIcecreamSandwich(str)) {
        std::cout << "��� ������� � ���������." << std::endl;
    }
    else {
        std::cout << "��� �� ������� � ���������." << std::endl;
    }

    return 0;
}






