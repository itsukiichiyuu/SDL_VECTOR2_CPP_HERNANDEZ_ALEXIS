#pragma once
#include <SDL.h>      
#include "SDL_image.h"
#include "cGame.h"
#include "delay.h"

class cRender
{
private:
	cPlayer m_player;
	SDL_Rect m_rect;
	SDL_Window * window;
	SDL_Renderer * renderer;
	SDL_Texture * texture;
	unsigned int frameLimit;//gestion des FPS
	bool quit;
	SDL_Event event;
	cDelay frames;
public:
	//--------------------assesseurs--------------------//
	SDL_Rect getRect();
	cPlayer * getPlayer();
	SDL_Texture * getTexture();
	SDL_Renderer * getRenderer();
	SDL_Window * getWindow();

	//--------------------mutateurs--------------------//
	void gameTick();

	
	//--------------------constructeurs--------------------//
	cRender();

	//--------------------destructeurs--------------------//
	~cRender();
};