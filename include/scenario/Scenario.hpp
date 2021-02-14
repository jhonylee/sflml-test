#ifndef SCENARIO_H
#define SCENARIO_H

#include<SFML/Graphics.hpp>
#include<iostream>

using namespace std;

class Scenario
{
private:
    int matriz[25][25];
    
    sf::Texture ground_01;
    sf::Texture ground_02;
    sf::Texture ground_03;

    sf::Sprite spGround_01;
    sf::Sprite spGround_02;
    sf::Sprite spGround_03;

    sf::IntRect rcGround_01;
    sf::IntRect rcGround_02;
    sf::IntRect rcGround_03;

public:
    Scenario(/* args */);
    void loadTextures();
    void loadSprites();
    void loadRects();
    void printTextures(sf::RenderWindow *window);
    void changeArray();
    void printArray();
    void assign();
    void positionRect(sf::IntRect *rect, int left,int top, int width, int height);


};







#endif