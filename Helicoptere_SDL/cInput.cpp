#include "cInput.h"

SDL_Keycode cInput::getInput(SDL_Keycode input)
{
	switch (input)
	{
	case SDLK_LEFT: return left;break;
	case SDLK_RIGHT: return right;break;
	case SDLK_ESCAPE: return escape;break;
	default: return 0;
	}
}

cInput::cInput()
{
}


cInput::~cInput()
{
}
