//Мені допамагав chatGPT. Я чесно зізнаюсь що мало розімую як мій код працює


#include <iostream>
#include <random>
#include <unordered_map>
using std::cout;
using std::endl;
using std::string;
/*
std::random_device rd; // виніс у глобальну зону видимості бо інакше в мене видає одне й те саме значення
std::uniform_int_distribution<int> dist(1, 100);
int myrand() // зробив зручну функцію яка видає рандомне число але не бачу де вона використовується і код працює без неї
{
    return dist(rd);
}
*/

class MyClass // Мій класс
{
public:
    MyClass() = default; //я не знав що так можна створювати конструктор за замовчуванням

    MyClass(string idValue)
    {
        id = idValue;
    }

    size_t hash() const // я досі не розумію що за тип даних size_t
    {
        return std::hash<string>{}(id); // chatGPT сказав можна користуватись функцією яка є в STL.
    }

    string getId() const // метод що повертає сирий ID
    {
        return id;
    }

private:
    string id;
};

int main()
{

    std::unordered_map<size_t, MyClass> uomap;

    for (int i = 0; i < 10; ++i)
    {
        std::string id = "ID: " + std::to_string(i);
        MyClass obj(id);
        uomap[obj.hash()] = obj;
    }

    
    for ( auto x : uomap)
    {
        std::cout << "Key: " << x.first << ", Value: " << x.second.getId() << std::endl;
    }

    system("pause");
    return 0;
}