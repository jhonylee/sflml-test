#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    sf::CircleShape shape(100.f,10);
    int posx = 0,posy = 0;
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(posx,posy);
    int vel = 3;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed)
            {
                if(event.key.code == sf::Keyboard::Left){
                    posx-=vel;
                    shape.setPosition(posx,posy);
                }
                if(event.key.code == sf::Keyboard::Right){
                    posx+=vel;
                    shape.setPosition(posx,posy);
                }
                if(event.key.code == sf::Keyboard::Up){
                    posy-=vel;
                    shape.setPosition(posx,posy);                }
                if(event.key.code == sf::Keyboard::Down){
                    posy+=vel;
                    shape.setPosition(posx,posy);
                }
            }
            
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}