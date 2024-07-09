#ifndef GRAPHICS_HPP
#define GRAPHICS_HPP

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