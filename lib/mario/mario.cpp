#include<iostream>
#include<string>
#include "../../include/mario/Mario.hpp"


using namespace std;

Mario::Mario(){

    if(!this->marioTexture.loadFromFile("assets/sprites/mario.png")){
        cout << "error: failed to load mario texture";
    }

    this->marioRect.top = 0;
    this->marioRect.left = 0;
    this->marioRect.width = 16;
    this->marioRect.height = 24;


    this->marioSprite.setTextureRect(this->marioRect);

    this->marioSprite.setTexture(this->marioTexture);

    this->spriteWidth = 16;
    this->spriteHeight = 24;

}
void Mario::move(int x, int y){
    this->marioSprite.move(x,y);
}
void Mario::setMarioRect(int left, int top, int width, int height){
    this->marioRect.left = left;
    this->marioRect.top = top;
    this->marioRect.width = width;
    this->marioRect.height = height;
}
void Mario::changeDirection(string direction){
    this->marioSprite.scale(-1,1);
    if(direction == "left"){
        this->move(-this->spriteWidth,0);
    }
    if(direction == "right"){
        this->move(this->spriteWidth,0);
    }
}

void Mario::updateTexture(){
    this->marioSprite.setTextureRect(this->marioRect);
}