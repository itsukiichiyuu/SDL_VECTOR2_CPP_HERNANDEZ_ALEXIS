#pragma once
#include "cInput.h"
#include "cPlayer.h"
#include <SDL.h>

class cGame
{
private:
	cInput m_input;
	SDL_Event m_event;

public:

	//assesseurs
	SDL_Keycode getInput();

	//mutateurs

	//--------------------constructeurs--------------------//
	cGame();

	//--------------------destructeurs--------------------//
	~cGame();
};