#include <iostream>
#include <SDL2/SDL.h>

const int width = 1200, height = 800;

int main(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow("First Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_ALLOW_HIGHDPI);
    if(window == NULL)
    {
        std::cout << "Fail on Window Creation" << SDL_GetError( ) << std::endl;
        return 1;
    }
    SDL_Event windowEvent;

    while(true)
    {
        if(SDL_PollEvent(&windowEvent))
        {
            if(SDL_QUIT == windowEvent.type){break;}
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}