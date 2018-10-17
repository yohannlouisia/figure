#include <iostream>
#include "rectangle.h"

int rectangle::perimetre(int longueur, int largeur){

	return(longueur*2+largeur*2);
}

int rectangle::surface(int longueur, int largeur){

	return(longueur*largeur);
}
