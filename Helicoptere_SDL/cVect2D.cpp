#include "cVect2d.h"


//--------------------assesseurs--------------------//
float cVect2d::getVectEnX()const
{
	return this->m_fltx;
}

float cVect2d::getVectEnY()const
{
	return this->m_flty;
}

//--------------------mutateurs--------------------//
void cVect2d::setVectEnX(float fltx)
{
	m_fltx = fltx;
}

void cVect2d::setVectEnY(float flty)
{
	m_flty = flty;
}

//--------------------constructeurs--------------------//
cVect2d::cVect2d()
{
	m_fltx = 0.0f;
	m_flty = 0.0f;
}

cVect2d::cVect2d(float fltx,float flty)
{
	m_fltx = fltx;
	m_flty = flty;
}

cVect2d::cVect2d(float fltzero)
{
	m_fltx = fltzero;
	m_flty = fltzero;
}

//--------------------destructeur--------------------//
cVect2d::~cVect2d()
{
}

//--------------------somme--------------------//
void cVect2d::sommeVect(cVect2d vect)
{
	m_fltx += vect.m_fltx;
	m_flty += vect.m_flty;
}

//--------------------soustraction--------------------//
void cVect2d::sousVect(cVect2d vect) 
{
	m_fltx -= vect.m_fltx;
	m_flty -= vect.m_flty;
}

//--------------------nullité (non utilisé)--------------------//
void cVect2d::nullVect()
{
	if ((m_fltx == 0.0f) && (m_flty == 0.0f))
	{
		// le vecteur est nul
	}
}

//--------------------multiplication de vecteur avec un reel (scalaire)--------------------//
void cVect2d::multiReel(float f)
{
	m_fltx = m_fltx * f;
	m_flty = m_flty * f;
}

//--------------------multiplication de deux vecteurs--------------------//
void cVect2d::multiVect(cVect2d vect)
{
	m_fltx = m_fltx * vect.m_fltx;
	m_flty = m_flty * vect.m_flty;
}

//--------------------norme d'un vecteur--------------------//
float cVect2d::normeVect(cVect2d vect)
{
	float norme = 0.0f;

	norme = sqrt(pow(vect.m_fltx-m_fltx,2)+pow(vect.m_flty-m_flty,2));

	return norme;
}
