#pragma once
#include <SDL.h>

class cInput
{
private:

	SDL_Keycode left= SDLK_LEFT;
	SDL_Keycode right = SDLK_RIGHT;
	SDL_Keycode escape = SDLK_ESCAPE;

public:
	
	//assesseurs
	SDL_Keycode getInput(SDL_Keycode input);

	//mutateurs
	//pas besoin 

	//--------------------constructeurs--------------------//
	cInput();

	//--------------------destructeurs--------------------//
	~cInput();
};

