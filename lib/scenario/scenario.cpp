#include<iostream>
#include"../../include/scenario/Scenario.hpp"


Scenario::Scenario(){
    if(!this->ground_01.loadFromFile("assets/sprites/scenario/Tile_1.png")){
        cout << "erro ao carregar textura" << endl;
    }
    if(!this->ground_02.loadFromFile("assets/sprites/scenario/Tile_2.png")){
        cout << "erro ao carregar textura" << endl;
    }
    
    if(!this->ground_03.loadFromFile("assets/sprites/scenario/Tile_3.png")){
        cout << "erro ao carregar textura" << endl;
    }

    this->positionRect(&this->rcGround_01,0,0,30,30);
    this->positionRect(&this->rcGround_02,0,0,30,30);
    this->positionRect(&this->rcGround_03,0,0,30,30);

    this->loadSprites();


    this->assign();
    

}

void Scenario::printArray(){
    for(int i = 0; i <25; i++){
        for(int j = 0; j <25; j++){
            cout << this->matriz[i][j] << " ";
    }
    cout<< endl;
    }
}
void Scenario::assign(){
        int base[25][25] = {
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,1,2,2,3,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,1,2,2,2,2,2,2,3,3,3,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    };
    for(int i = 0; i <25; i++){
        for(int j = 0; j <25; j++){
            this->matriz[i][j] = base[i][j];
    }
    }
}

void Scenario::loadTextures(){

}
void Scenario::printTextures(sf::RenderWindow *window){
    
    spGround_01.setPosition(30,30);
    for(int i =0;i < 25;i++){
        for(int j =0;j < 25;j++){
            if(this->matriz[i][j] == 1){
                spGround_01.setPosition(30*j,30*i);
                window->draw(this->spGround_01);
            }
            if(this->matriz[i][j] == 2){
                spGround_02.setPosition(30*j,30*i); 
                window->draw(this->spGround_02);
            }
            if(this->matriz[i][j] == 3){
               spGround_03.setPosition(30*j,30*i);
                window->draw(this->spGround_03);
            }
        }   
    }

}

void Scenario::loadSprites(){
    this->spGround_01.setTextureRect(this->rcGround_01);
    this->spGround_02.setTextureRect(this->rcGround_02);
    this->spGround_03.setTextureRect(this->rcGround_03);

    this->spGround_01.setTexture(this->ground_01);
    this->spGround_02.setTexture(this->ground_02);
    this->spGround_03.setTexture(this->ground_03);

}

void Scenario::positionRect(sf::IntRect *rect, int left, int top, int width, int height){
    rect->left = left;
    rect->top = top;
    rect->width = width;
    rect->height = height;
}

