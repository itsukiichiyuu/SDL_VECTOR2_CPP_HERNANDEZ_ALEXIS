#include "cGameObject.h"


int cGameObject::getH()
{
	return destR.h;
}

int cGameObject::getW()
{
	return destR.w;
}

int cGameObject::getX()
{
	return destR.x;
}

int cGameObject::getY()
{
	return destR.y;
}

cSprite * cGameObject::getplayerSprite()
{
	return &playerSprite;
}

SDL_Rect cGameObject::getRect()
{
	return destR;
}

void cGameObject::setH(int height)
{
	destR.h = height;
}

void cGameObject::setW(int width)
{
	destR.w = width;
}

void cGameObject::setX(int x)
{
	destR.x = x;
}

void cGameObject::setY(int y)
{
	destR.y = y;
}

//--------------------constructeurs--------------------//
cGameObject::cGameObject()
{
	destR.h = 32;//hauteur du sprite
	destR.w = 32;//largeur du sprite
	destR.x = 0;//placement en x
	destR.y = 300;//placement en y
}

//--------------------destructeurs--------------------//
cGameObject::~cGameObject()
{
}