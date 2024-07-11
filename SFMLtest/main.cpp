#include <SFML/Graphics.hpp>
#include <chrono>
using namespace sf;
int main()
{
sf::RenderWindow window(sf::VideoMode(800,600), "SFML Window");
while(window.isOpen())
{
sf::Event event;
while(window.pollEvent(event))
{
    if (event.type == sf::Event::Closed)
    window.close();
}
window.clear(sf::Color(250,220,100,0));

sf::CircleShape circle(50.f);

circle.setFillColor(Color(230, 0, 230));
for(int i=0;i<100;i++)
{
circle.move(i+10,i+10);

window.draw(circle);

window.display();
}
}
return 0;
}
