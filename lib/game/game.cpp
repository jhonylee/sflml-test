#include "../../include/game/Game.hpp"
#include "../../include/scenario/Scenario.hpp"


Game::Game(){
}
void Game::init(){
    this->window = new sf::RenderWindow(sf::VideoMode(750,750),"Jogo");
    Scenario scenario;
}
void Game::endgame(){

}
void Game::updateEvents(){
    while (this->window->pollEvent(this->sfevent))
    {
        if (this->sfevent.type == sf::Event::Closed)
                this->window->close();
        if (this->sfevent.type == sf::Event::KeyPressed)
        {
            if(this->sfevent.key.code == sf::Keyboard::Left){

            }
            if(this->sfevent.key.code == sf::Keyboard::Right){

            }
        }
            if(this->sfevent.key.code == sf::Keyboard::Up){

                }
            if(this->sfevent.key.code == sf::Keyboard::Down){
            }
    }

    if(this->sfevent.type == sf::Event::KeyReleased){
        if(this->sfevent.key.code == sf::Keyboard::Left){
            
        }
        if(this->sfevent.key.code == sf::Keyboard::Right){
            
        }
    }
            
}
    
void Game::update(){

}
void Game::render(){
    this->window->clear();
    this->scenario.printTextures(this->window);
    this->window->display();
    

}
void Game::run(){
    while(this->window->isOpen()){
        this->updateEvents();
        this->update();
        this->render();

    }
}