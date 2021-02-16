#ifndef GAME_HPP
#define GAME_HPP
#include<SFML/Graphics.hpp>
#include "../scenario/Scenario.hpp"
class Game
{
private:
    sf::RenderWindow *window;
    sf::Event sfevent;
    sf::Clock clock;
    Scenario scenario;

    float ps;

public:
    Game(/* args */);
    void endgame();
    void updateEvents();
    void update();
    void render();
    void run();
    void init();
};


#endif
