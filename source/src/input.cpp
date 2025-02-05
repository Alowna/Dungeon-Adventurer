#include "../headers/input.hpp"

//class to search for keys state

void Input::beginNewFrame()
{
    this->pressedKeys.clear();
    this->releasedKeys.clear();
}


void Input::keyDownEvent(const SDL_Event &event)
{
    this->pressedKeys[event.key.keysym.scancode] = true;
    this->heldKeys[event.key.keysym.scancode] = true;
}

void Input::keyUpEvent(const SDL_Event &event)
{
    this->releasedKeys[event.key.keysym.scancode] = true;
    this->heldKeys[event.key.keysym.scancode] = false;
}

bool Input::wasKeyPressed(SDL_Scancode key)
{
    return this->pressedKeys[key];
}

bool Input::wasKeyReleased(SDL_Scancode key)
{
    return this->releasedKeys[key];
}

bool Input::isKeyHeld(SDL_Scancode key)
{
    return this->heldKeys[key];
}