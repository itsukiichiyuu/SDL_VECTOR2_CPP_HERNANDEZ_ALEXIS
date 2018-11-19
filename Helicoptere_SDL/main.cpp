#include <SDL.h>      
#include "SDL_image.h"
#include "cGame.h"
#include "cRender.h"
#include <iostream>
#include "init.h"
#include "detruire.h"

int main(int argc, char ** argv)
{
	//----------initialisation----------//

	initialiser();//initialise la SDL

	//----------fin initialisation----------//

	cRender rendu;

	//----------boucle du jeu----------//
	rendu.gameTick();
	
	//----------destructeur----------//
	detruire(rendu.getTexture(),rendu.getPlayer()->getGameObject().getplayerSprite()->getImage(), rendu.getRenderer(), rendu.getWindow());

	IMG_Quit();
	SDL_Quit();

	return 0;
}