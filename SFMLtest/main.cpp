#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow game(sf::VideoMode(800, 600), "Test window");
    sf::Vector2f rectsize(100.0f, 50.0f);
    sf::RectangleShape rect(rectsize);
    sf::Vector2f rectPosition(200.0f, 100.0f);
    sf::Font font;
    font.loadFromFile("/home/master/Repositories/cpp/SFMLtest/arial.ttf");
    sf::Text txt;
    txt.setFont(font);
    txt.setPosition(200.0f, 100.0f);
    txt.setString("Text");
    txt.setCharacterSize(16);
    txt.setFillColor(sf::Color::White);
    txt.setStyle(sf::Text::Bold | sf::Text::Underlined);
    while (game.isOpen())
    {
        sf::Event event;
        while (game.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                game.close();
            }
        }

        game.clear(sf::Color::Black);
        rect.setFillColor(sf::Color::Green);
        rect.setPosition(rectPosition);


        game.draw(rect);
        game.draw(txt);
        game.display();
    }

    return 0;
}
