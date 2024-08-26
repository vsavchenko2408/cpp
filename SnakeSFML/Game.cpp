#include "Game.h"

Game::Game() : mWindow(sf::VideoMode(800, 600), "Snake Game"), mSnake() {
}

void Game::run() {
    while (mWindow.isOpen()) {
        processEvents();
        update();
        render();
    }
}

/*
void Game::processEvents() {
    sf::Event event;
    while (mWindow.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            mWindow.close();
        }
    }
}
*/
void Game::update() {
    mSnake.update();
}

void Game::render() {
    mWindow.clear();
    mSnake.render(mWindow);
    mWindow.display();
}

void Game::processEvents() {
    sf::Event event;
    while (mWindow.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            mWindow.close();
        } else if (event.type == sf::Event::KeyPressed) {
            if (event.key.code == sf::Keyboard::Up) {
                mSnake.setDirection(sf::Vector2f(0.f, -20.f));
            } else if (event.key.code == sf::Keyboard::Down) {
                mSnake.setDirection(sf::Vector2f(0.f, 20.f));
            } else if (event.key.code == sf::Keyboard::Left) {
                mSnake.setDirection(sf::Vector2f(-20.f, 0.f));
            } else if (event.key.code == sf::Keyboard::Right) {
                mSnake.setDirection(sf::Vector2f(20.f, 0.f));
            }
        }
    }
}
