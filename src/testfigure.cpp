#include <iostream>
#include "triangle.h"
#include "rectangle.h"
#include "disque.h"

using namespace std;

int main(){
	int choix;
	int longueur, largeur;
	int cote1, cote2, cote3;
	int hauteur, base;
	int rayon;
	cout << "choix de la figure :" << endl;
	cout << "1 pour rectangle" << endl;
	cout << "2 pour triangle" << endl;
	cout << "3 pour disque" << endl;
	cin >> choix;
	switch (choix){
	case 1 :
		rectangle rectangle1;
		cout << "Entrez la longueur puis la largeur" << endl;
		cin >> longueur;
		cin >> largeur;
		cout << "perimetre : " << rectangle1.perimetre(longueur, largeur) << endl;
		cout << "surface : " << rectangle1.surface(longueur, largeur) << endl;

		break;
	case 2 :
		triangle triangle1;
		cout << "Entrez les cotes du triangle :" << endl;
		cin >> cote1;
		cin >> cote2;
		cin >> cote3;
		cout << "Entrez la hauteur puis la base :" << endl;
		cin >> hauteur;
		cin >> base;
		cout << "perimetre : " << triangle1.perimetre(cote1, cote2, cote3) << endl;
		cout << "surface : " << triangle1.surface(hauteur, base) << endl;
		break;
	case 3 :
		disque disque1;
		cout << "Entrez le rayon du disque :" << endl;
		cin >> rayon;
		cout << "perimetre : " << disque1.perimetre(rayon) << endl;
		cout << "surface : " << disque1.surface(rayon) << endl;
		break;

	}
		return 0;

}
