#pragma once
#include <SDL.h>      
#include "SDL_image.h"

class cSprite
{
private:

	SDL_Surface image[6];
	SDL_Surface imageActuelle;

public:

	//assesseurs
	SDL_Surface * getImage();

	//mutateurs
	void setImage(int i);


	//--------------------constructeurs--------------------//

	cSprite();

	//--------------------destructeurs--------------------//

	~cSprite();
};

