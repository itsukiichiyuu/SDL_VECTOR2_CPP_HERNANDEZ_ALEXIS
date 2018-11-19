#include "cGame.h"


SDL_Keycode cGame::getInput()
{
	return SDL_Keycode(m_input.getInput(m_event.key.keysym.sym));
}


cGame::cGame()
{
}


cGame::~cGame()
{
}
