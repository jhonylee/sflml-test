#ifndef GAME_HPP
#define GAME_HPP
#include<SFML/Graphics.hpp>
class Game
{
private:
    sf::RenderWindow *window;
    sf::Event sfevent;
    sf::Clock clock;
    float ps;

public:
    Game(/* args */);
    void endgame();
    void updateEvents();
    void update();
    void render();
    void run();
    void init();
    ~Game();
};


#endif
