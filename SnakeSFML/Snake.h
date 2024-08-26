#pragma once

#include <SFML/Graphics.hpp>
#include <deque>

class Snake {
public:
    Snake();
    void update();
    void render(sf::RenderWindow &window);
    void setDirection(const sf::Vector2f &direction);

private:
    std::deque<sf::RectangleShape> mBody;
    sf::Vector2f mDirection;
    void move();
};
