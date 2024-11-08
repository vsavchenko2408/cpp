#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main()
{
    // Створюємо вікно з можливістю малювання
    sf::RenderWindow game(sf::VideoMode(800, 600), "Test window");

    // Цикл, поки вікно відкрите
    while (game.isOpen())
    {
        sf::Event event;
        while (game.pollEvent(event))
        {
            // Закриваємо вікно, якщо натиснута кнопка закриття
            if (event.type == sf::Event::Closed)
                game.close();
        }

        game.clear(sf::Color::White);
        sf::CircleShape circle(50.0f);
        circle.setFillColor(sf::Color::Black);
        circle.move(15, 15);
        game.draw(circle);

        // Відображаємо все, що було намальовано на екрані
        game.display();
    }

    return 0;
}
