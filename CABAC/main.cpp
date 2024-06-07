#include <iostream>
#include <fstream>
#include <vector>
#include <map>

// Спрощене кодування CABAC
std::vector<bool> encode(const std::vector<int>& data) {
    std::vector<bool> encodedData;
    // Простий приклад: кодуємо кожне число у бітовому вигляді
    for (int num : data) {
        encodedData.push_back(num % 2); // Простий бітовий приклад
    }
    return encodedData;
}

void printStatistics(const std::vector<int>& data, const std::string& label) {
    int count1 = 0, count0 = 0;
    for (int num : data) {
        if (num == 1) count1++;
        else count0++;
    }
    std::cout << label << ": " << data.size() << " шт [1=" << (count1 * 100 / data.size()) << "%; 0=" << (count0 * 100 / data.size()) << "%]\n";
}

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("encoded_output.txt");
    std::vector<int> inputData;
    int number;
    
    while (inputFile >> number) {
        inputData.push_back(number);
    }
    
    printStatistics(inputData, "Вхід");

    std::vector<bool> encodedData = encode(inputData);

    for (bool bit : encodedData) {
        outputFile << bit;
    }

    std::vector<int> encodedDataInt(encodedData.begin(), encodedData.end());
    printStatistics(encodedDataInt, "Вихід");

    return 0;
}