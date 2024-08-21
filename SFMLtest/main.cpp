#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace sf;
int main()
{
sf::Window game(VideoMode(800,600), "Test window");
while(game.isOpen())
{
    Event event;


    game.display();
}

return 0;
}
