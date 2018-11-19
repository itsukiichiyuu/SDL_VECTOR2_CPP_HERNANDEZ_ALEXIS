#include "cRender.h"


SDL_Rect cRender::getRect()
{
	return m_rect;
}

cPlayer * cRender::getPlayer()
{
	return &m_player;
}

SDL_Texture *cRender::getTexture()
{
	return texture;
}

SDL_Renderer * cRender::getRenderer()
{
	return renderer;
}

SDL_Window * cRender::getWindow()
{
	return window;
}


void cRender::gameTick()
{

	while (!quit)
	{
		SDL_WaitEvent(&event);
		
		switch (event.type)
		{
		case SDL_QUIT:
			quit = true;
			break;
		}

		SDL_RenderClear(renderer);//nettoie l'écran
		m_player.setPositionX(event);//place le sprite, édite le sprite en fonction de la touche tapée par le joueur
		m_rect = getPlayer()->getGameObject().getRect();//le rect utilisé est celui du gameObject
		texture = SDL_CreateTextureFromSurface(getRenderer(), getPlayer()->getGameObject().getplayerSprite()->getImage());//on change la texture 
		
		if (getPlayer()->getFaceRight()==true)
		{
			SDL_RenderCopyEx(renderer, texture, NULL, &m_rect, NULL, NULL, SDL_FLIP_HORIZONTAL);//si le joueur change de direction, on retourne le sprite 

		}
		else
		{
			SDL_RenderCopy(renderer, texture, NULL, &m_rect);//si le joueur continue dans la même direction le sprite n'est pas retourné
		}
		
		SDL_RenderPresent(renderer);//on lance le rendu
		frameLimit = SDL_GetTicks() + frames.getFps();//gestion des FPS (bloque à 30 fps)
		frames.delai(frameLimit);//modification de la variable servant à gérer les fps
	}
}

cRender::cRender()
{
	quit = false;
	m_rect = getPlayer()->getGameObject().getRect();
	window = SDL_CreateWindow("SDL2 sprite_moving", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
	renderer = SDL_CreateRenderer(window, -1, 0);
	texture = SDL_CreateTextureFromSurface(renderer, getPlayer()->getGameObject().getplayerSprite()->getImage());
	frameLimit = SDL_GetTicks() + frames.getFps();//gestion des FPS

}

cRender::~cRender()
{
}
