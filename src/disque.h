/*! \file qisque.h
* \brief calcul du perimetre et de la surface d'un cercle
* \author Yohann Louisia
* \version 1.0
*/
#pragma once
#include "figure.h"

/*! \class disque
* \brief calculer la surface et le perimetre du disque
*/
class disque : public figure
{

public :
/*! \brief 
* \param rayon
* calculer le perimetre avec le rayon et pi
*/
	int perimetre(int rayon);

/*! \brief
* \param rayon
* calculer la surface avec le rayon et pi
*/
	int surface(int rayon);

};
