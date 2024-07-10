#include "../headers/game.hpp"
#include "../headers/input.hpp"

//Class where the loop of the game is running

Game::Game()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    this->gameLoop();
}

Game::~Game()
{

}

void Game::gameLoop()
{
    Graphics graphics;
    Input input;
    SDL_Event event;

    while(true)
    {
        input.beginNewFrame();

        if(SDL_PollEvent(&event))
        {
            if(event.type == SDL_KEYDOWN)
            {
                //verify if a key is being held, repeated
                if(event.key.repeat == 0)
                {
                    input.keyDownEvent(event);
                }
            }
            else if(event.type = SDL_KEYUP)
            {
                input.keyUpEvent(event);
            }
            if(event.type == SDL_QUIT)
            {
                return;
            }
        }
        if(input.wasKeyPressed(SDL_SCANCODE_ESCAPE)){
            return;
        }
    }
}

void Game::draw(Graphics &graphic)
{

}

void Game::update(float elapsedTime)
{

}