#pragma once
#include "cInput.h"
#include "cGameObject.h"
#include "cVect2D.h"
#include <SDL.h>

class cPlayer
{
private:
	cInput m_input;
	cGameObject m_character;
	int m_x;
	SDL_Event m_event;
	int i;
	bool faceRight;

public:

	//assesseurs
	cGameObject getGameObject();
	SDL_Keycode getInput();
	bool getFaceRight();

	//mutateurs
	void setCharacter(cGameObject obj);
	void setPositionX(SDL_Event event);
	//void setPositionY(cGameObject obj); //non utilisé


	//--------------------constructeurs--------------------//
	cPlayer();

	//--------------------destructeurs--------------------//
	~cPlayer();
};

