/*! \file rectangle.h
* \brief calcul du perimetre et de la surface du rectangle
* \author Yohann Louisia
* \version 1.0
*/
#pragma
#include "figure.h"

/*! \class rectangle
* \brief calcule du perimetre et de la surface du rectangle
*/
class rectangle : public figure {

public :

/*! \brief 
* \param longueur
* \param largeur
*/
	int perimetre(int longueur, int largeur);
/*! \biref
* \param longueur
* \param largeur
*/
	int surface(int longueur, int largeur);



};
