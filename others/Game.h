#pragma once

#include <SFML/Graphics.hpp>
#include "Snake.h"

class Game {
public:
    Game();
    void run();

private:
    void processEvents();
    void update();
    void render();

    sf::RenderWindow mWindow;
    Snake mSnake;
};
