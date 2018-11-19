#pragma once
#include <math.h>

class cVect2d {

	//--------------------Donnees membres--------------------//
private:
	float m_fltx;// x du vecteur
	float m_flty;//y du vecteur

	//--------------------fonctions membres--------------------//
public:
	//assesseurs
	float getVectEnX()const;
	float getVectEnY()const;

	//mutateurs
	void setVectEnX(float fltx);
	void setVectEnY(float flty);

	//somme de deux vecteurs
	void sommeVect(cVect2d vect);

	//soustraction de deux vecteurs
	void sousVect(cVect2d vect);

	//test si le vecteur est nul (non utilisé)
	void nullVect();

	//Produit scalaire (multiplication d'un vecteur par un réel)
	void multiReel(float);

	//Produit vectoriel de deux vecteurs (multiplication d'un vecteur avec un autre)
	void multiVect(cVect2d vect);

	//Calcul de la norme d'un point à un autre
	float normeVect(cVect2d vect);

	//--------------------constructeurs--------------------//

	//constructeur sans paramètres
	cVect2d();

	//constructeur avec paramètres
	cVect2d(float fltx,float flty);

	//constructeur avec paramètre par défaut
	cVect2d(float fltzero = 0.0f);
	
	//--------------------destructeur--------------------//
	~cVect2d();
	
};