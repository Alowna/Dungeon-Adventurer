#ifndef GRAPHICS_HPP
#define GRAPHICS_HPP

//got to include SDL2 libraries during compilation command. (using Makefile to save it)
#include <SDL2/SDL.h>

class Graphics
{
    public:
        Graphics();
        ~Graphics();
    private:
        SDL_Window* window;
        SDL_Renderer* renderer;
};



#endif