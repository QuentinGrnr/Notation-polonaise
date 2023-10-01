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
		/* 
		Ecrire ici une boucle qui lit caractère par caractère l'expression numérique
		contenue dans filestream et insére chacun des caractères lû dans la file "file".
		Attention le caractère 'f' ne doit pas être mis dans la file. Il indique juste la fin de
		la lecture.

		Dés qu'un cacractère c est lû, il doit aussi être affiché : en écrivant cout << c;
		*/

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

double expression::calcul()
{
    return(0);
}
