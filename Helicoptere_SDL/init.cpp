#include "init.h"
#include "SDL.h"
#include "SDL_image.h"


void initialiser()
{
	SDL_Init(SDL_INIT_VIDEO);
	IMG_Init(IMG_INIT_JPG);
	IMG_Init(IMG_INIT_PNG);
}
