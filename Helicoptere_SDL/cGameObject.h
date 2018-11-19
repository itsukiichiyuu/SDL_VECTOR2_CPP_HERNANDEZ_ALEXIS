#pragma once
#include "cSprite.h"

class cGameObject
{
	//--------------------Donnees membres--------------------//
private:
	SDL_Rect destR;//sert au placement du sprite sur l'écran
	cSprite playerSprite;

	//--------------------fonctions membres--------------------//
public:

	//assesseurs
	int getH();
	int getW();
	int getX();
	int getY();
	cSprite * getplayerSprite();
	SDL_Rect getRect();

	//mutateurs
	void setH(int height);
	void setW(int width);
	void setX(int x);
	void setY(int y);

	//--------------------constructeurs--------------------//
	cGameObject();

	//--------------------destructeurs--------------------//
	~cGameObject();
};