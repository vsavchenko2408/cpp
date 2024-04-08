#include <iostream>
#include <unordered_map>
#include <string>
#include <functional> // для std::hash
#include <random>     // для генератора випадкових чисел

// Ваш клас
struct CKey
{
    std::string part1 = "";
    std::string part2 = "";

    // Перевизначення оператора == для порівняння об'єктів класу CKey
    bool operator==(const CKey &other) const
    {
        return part1 == other.part1 && part2 == other.part2;
    }
};

// Хеш функція для класу CKey
class CKeyHashFunctor
{
public:
    size_t operator()(const CKey &key) const
    {
        // Об'єднуємо частини ключа і хешуємо отриману строку
        return std::hash<std::string>{}(key.part1 + key.part2);
    }
};

int main()
{
    // Створення контейнера unordered_map з використанням нашого класу та хеш-функції
    std::unordered_map<CKey, int, CKeyHashFunctor> map;

    // Генератор випадкових чисел
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    // Заповнення контейнера декількома значеннями
    map[CKey{"Hello", "World!"}] = dis(gen);
    map[CKey{"It's", "me!"}] = dis(gen);
    map[CKey{"How are", "you?"}] = dis(gen);

    // Виведення значень у консоль з використанням ranged-based for
    for (const auto &pair : map)
    {
        std::cout << "Key: (" << pair.first.part1 << ", " << pair.first.part2 << "), Value: " << pair.second << std::endl;
    }

    return 0;
}