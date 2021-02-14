
#ifndef MARIO_HPP
#define MARIO_HPP

    #include <SFML/Graphics.hpp>
    #include <string>

    using namespace std;
    using namespace sf;

    class Mario
    {
    private:
        
        Texture marioTexture;
        int direction;


    public:
        IntRect marioRect;
        Sprite marioSprite;
        int spriteWidth;
        int spriteHeight;
        Mario();
        void setMarioRect(int left, int top, int width, int height);
        void move(int x,int y);
        void changeDirection(string direction);
        void updateTexture();
    };
    
    

#endif