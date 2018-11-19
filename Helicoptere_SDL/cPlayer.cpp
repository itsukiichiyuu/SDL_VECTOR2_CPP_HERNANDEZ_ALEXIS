#include "cPlayer.h"


cGameObject cPlayer::getGameObject()
{
	return m_character;
}

SDL_Keycode cPlayer::getInput()
{
	return SDL_Keycode (m_input.getInput(m_event.key.keysym.sym));
}

bool cPlayer::getFaceRight()
{
	return faceRight;
}

void cPlayer::setCharacter(cGameObject obj)
{
	m_character = obj;
}

void cPlayer::setPositionX(SDL_Event event)
{
	
	switch (event.key.keysym.sym)
	{
		case SDLK_LEFT:// si le joueur va vers la gauche, on déplace le sprite à gauche
			m_x -= 10;
			if (i < 5)
			{
				m_character.getplayerSprite()->setImage(i);
				i++;
				faceRight = false;
			}
			else
			{
				i = 0;
				m_character.getplayerSprite()->setImage(i);
				faceRight = false;
			}
			break;
		case SDLK_RIGHT:// si le joueur va vers la droite, on déplace le sprite à droite
			m_x += 10;
			if (i < 5)
			{
				m_character.getplayerSprite()->setImage(i);
				i++;
				faceRight = true;
			}
			else
			{
				i = 0;
				m_character.getplayerSprite()->setImage(i);
				faceRight = true;
			}
			break;
		case SDLK_ESCAPE:break;
	}
	
	m_character.setX(m_x);//on edit le placement du joueur
	
}

cPlayer::cPlayer()
{
	m_x = 0;
	i = 0;
	faceRight = false;
}

cPlayer::~cPlayer()
{
}
