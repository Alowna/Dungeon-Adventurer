#ifndef GAME_H
#define GAME_H

#include "graphics.hpp"

class Game
{
    public:
        Game();
        ~Game();
    private:
        void gameLoop();
        void draw(Graphics &graphic);
        void update(float elapsedTime);
};



#endif