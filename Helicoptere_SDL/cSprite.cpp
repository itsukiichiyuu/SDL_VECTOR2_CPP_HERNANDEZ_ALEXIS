#include "cSprite.h"
#include <SDL.h>      
#include <SDL_image.h>



SDL_Surface * cSprite::getImage()
{
	return &imageActuelle;
}

void cSprite::setImage(int i)
{
	imageActuelle = image[i];
}

//--------------------constructeurs--------------------//
cSprite::cSprite()
{
	image[0] = *IMG_Load("1.png");
	image[1] = *IMG_Load("2.png");
	image[2] = *IMG_Load("3.png");
	image[3] = *IMG_Load("4.png");
	image[4] = *IMG_Load("5.png");
	image[5] = *IMG_Load("6.png");
	imageActuelle = *IMG_Load("1.png");
}

//--------------------destructeurs--------------------//
cSprite::~cSprite()
{
}
