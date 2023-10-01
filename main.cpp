/****************************************/
/* Auteur : S. Gueye			*/
/* TP File avec un tableau, L2 Avignon	*/
/* Date dernière maj : 18/09/2019	*/
/****************************************/

#include <iostream>
#include <fstream>
#include <stack>
#include <queue>

using namespace std;

#include "expression.h"

int main(int argc,char** argv)
{
	expression expr;
	/* Le programme principal a un argument d'entrée	*/
	/* Le nom du fichier de test			*/
	if(argc < 2)
		cout << "Nombre d'arguments insuffisants" << endl;
	else{
		expr.lecture(argv[1]);
		cout << "Calcul.............." << endl;
		double res  = expr.calcul();
		cout << "...................." << endl;
		cout << "Résultat = " <<  res << endl;
	}

	return(1);
}
