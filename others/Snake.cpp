#include "Snake.h"

Snake::Snake() : mDirection(20.f, 0.f) {
    sf::RectangleShape segment(sf::Vector2f(20.f, 20.f));
    segment.setFillColor(sf::Color::Green);
    mBody.push_back(segment);
}

void Snake::update() {
    move();
}

void Snake::render(sf::RenderWindow &window) {
    for (const auto &segment : mBody) {
        window.draw(segment);
    }
}

void Snake::move() {
    for (size_t i = mBody.size() - 1; i > 0; --i) {
        mBody[i].setPosition(mBody[i - 1].getPosition());
    }
    mBody[0].move(mDirection);
}
void Snake::setDirection(const sf::Vector2f &direction) {
    mDirection = direction;
}
