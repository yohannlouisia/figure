#pragma
#include "figure.h"

class triangle : public figure {

public :
	int perimetre(int cote1, int cote2,int cote3);
	int surface(int hauteur, int base);

};
