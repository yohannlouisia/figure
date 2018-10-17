#include <iostream>
#include "triangle.h"


int triangle::perimetre(int cote1, int cote2, int cote3){

	return (cote1+cote2+cote3);
}

int triangle::surface(int hauteur, int base){

	return ((hauteur*base)/2);
}
