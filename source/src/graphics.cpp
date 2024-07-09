#include "../headers/graphics.hpp"

Graphics::Graphics()
{
    SDL_CreateWindowAndRenderer(640, 480, 0, &this->window, &this->renderer);
    SDL_SetWindowTitle(this->window, "Test");
}

Graphics::~Graphics()
{
    SDL_DestroyWindow(this->window);
}