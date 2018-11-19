#include "delay.h"
#include <time.h>
#include <SDL.h>    

void cDelay::delai(unsigned int frameLimit)
{
	// Gestion des 60 fps (images/seconde)
	unsigned int ticks = SDL_GetTicks();

	if (frameLimit < ticks)
	{
		return;
	}

	if (frameLimit > ticks + fps)
	{
		SDL_Delay(fps);
	}

	else
	{
		SDL_Delay(frameLimit - ticks);
	}
}

int cDelay::getFps()
{
	return fps;
}

cDelay::cDelay()
{
	fps = 60;
}


cDelay::~cDelay()
{
}
