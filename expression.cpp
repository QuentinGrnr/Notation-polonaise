/****************************************/
/* Auteur : S. Gueye			*/
/* Date dernière maj : 19/09/2019	*/
/****************************************/

#include <iostream>
#include <fstream>
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atof */
#include <math.h>  
#include <stack>
#include <queue>

using namespace std;

#include "expression.h"

/**************************************/
/* Lecture de l'expression numérioque postfixée 
/* se trouvant dans le fichier filename
/* Cette expression est une chaîne de caractères
/* se terminant par f
/*
/* La lecture consiste à :
/* - insérer dans l'ordre, un à un, les caractères de l'expression dans la file "file"
/* - afficher les caractères au fur et à mesure qu'ils sont lus.
/* 
/* Pour l'affichage si l'expression dans filename est 149/+752-4*-/f
/*
/* "lecture" doit afficher : Expr = 149/+752-4*-/
/**************************************/
void expression::lecture(char* filename)
{
	char c;
	bool fin = false;

	filestream.open(filename);

	if(! filestream)
		cerr << "Erreur ouverture fichier" << filename << endl;
	else{
		cout << "Expr = ";
		while(!fin){
			filestream.get(c);
			if(c == 'f') {
				fin = true;
			} else {
				cout << c;
				file.push(c);
			}
		}
	}
	cout << endl;
	filestream.close();
}

/*
Cette méthode doit exploiter ce qui se trouve dans file 
pour calculer la valeur de l'expression numérique qu'elle contient.

Elle retourne la valeur de cette expression. Elle doit aussi afficher 
tous les calculs intermédiaires qui ont permi de calculer cette valeur.

Par exemple si l'expression numérique postfixée est  : 677//5*

"calcul" doit afficher :

7/7=1
6/1=6
5*6=30

et retourner 30.

(attention à ne pas rajouter d'espace après chaque expression)
*/

double expression::calcul() {
	double a, b, res;
	char c;

	while(!file.empty()) {
		c = file.front();
		file.pop();
		if(c == '+') {
			a = pile.top();
			pile.pop();
			b = pile.top();
			pile.pop();
			res = a + b;
			pile.push(res);
			cout << b << "+" << a << "=" << res << endl;
		} else if(c == '-') {
			a = pile.top();
			pile.pop();
			b = pile.top();
			pile.pop();
			res = b - a;
			pile.push(res);
			cout << b << "-" << a << "=" << res << endl;
		} else if(c == '*') {
			a = pile.top();
			pile.pop();
			b = pile.top();
			pile.pop();
			res = b * a;
			pile.push(res);
			cout << b << "*" << a << "=" << res << endl;
		} else if(c == '/') {
			a = pile.top();
			pile.pop();
			b = pile.top();
			pile.pop();
			res = b / a;
			pile.push(res);
			cout << b << "/" << a << "=" << res << endl;
		} else {
			pile.push(atof(&c));
		}
	}
	return pile.top();
}
