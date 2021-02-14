#include <SFML/Graphics.hpp>
#include "../include/mario/Mario.hpp"
#include "../include/scenario/Scenario.hpp"
int main()
{
    sf::RenderWindow window(sf::VideoMode(750, 750), "SFML works!");
    sf::CircleShape shape(100.f,10);
    int posx = 0,posy = 0;
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(posx,posy);
    int vel = 3;
    int statemario = 0;
    int mariodireciton = 0;
    Mario mario;
    Scenario scenario;
    scenario.assign();
    scenario.loadSprites();
    sf::Texture yoshi;
    if(!yoshi.loadFromFile("assets/sprites/mario.png")){
        
    }

    sf::Clock clock;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed || event.type == sf::Event::KeyReleased)
            {
                if(event.key.code == sf::Keyboard::Left){
                    posx-=vel;
                    mario.move(-vel,0);
                    statemario = 1;
                    if(mariodireciton == 1){
                        mario.changeDirection("left");
                        mariodireciton = 0;
                       
                    }
                }
                if(event.key.code == sf::Keyboard::Right){
                    posx+=vel;
                    mario.move(vel,0);
                    statemario = 1;
                    if(mariodireciton == 0){
                        mario.changeDirection("right");
                        mariodireciton = 1;
                    }
                }
                if(event.key.code == sf::Keyboard::Up){
                    posy-=vel;
                    mario.move(0,-vel);             }
                if(event.key.code == sf::Keyboard::Down){
                    posy+=vel;
                    mario.move(0,vel); 
                }
            }
            if(event.type == sf::Event::KeyReleased){
                if(event.key.code == sf::Keyboard::Left){
                    statemario = 0;
                }
                if(event.key.code == sf::Keyboard::Right){
                    statemario = 0;
                }
            }
            
        }
        if(statemario == 0){  
            mario.marioRect.top = 0;
            mario.marioRect.left = 0;
            
        }

        if(clock.getElapsedTime().asSeconds() > 0.2){
            mario.marioRect.top = 24;
            
            if(mario.marioRect.left > 0 )
                mario.marioRect.left= 0;
            else
                mario.marioRect.left += 16;
        
            mario.updateTexture();
            clock.restart();
           

            
        }

        window.clear();

        scenario.printTextures(&window);
        window.draw(mario.marioSprite);
        
        //window.draw(shape);
        window.display();
    }

    return 0;
}