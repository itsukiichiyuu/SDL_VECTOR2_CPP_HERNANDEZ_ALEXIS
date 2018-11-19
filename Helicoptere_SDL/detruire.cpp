#include "detruire.h"


void detruire(SDL_Texture *texture , SDL_Surface *image, SDL_Renderer *renderer, SDL_Window *window)
{
	SDL_DestroyTexture(texture);
	SDL_FreeSurface(image);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
}