/****************************************/
/* Auteur : S. Gueye		        	*/
/* Date dernière maj : 16/10/2019	    */
/****************************************/

/****************************************/
/* Objectif : Classe représentant une expression
/****************************************/
class expression
{
	friend class evaluate;
	stack<double> pile;
	queue<char> file;
	ifstream filestream;

	public :
		void lecture(char* filename);
		double calcul();
};