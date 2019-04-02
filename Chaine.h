#ifndef Chaine_H
#define Chaine_H

#include <string>

using namespace std;

public:
	// Constructeurs
	Chaine() {};
	Chaine(string, string, string);


	string getChaineName();
	string getChaineCodePostal();
	string getChaineAddress();

private:
	// Informations sur la chaine de l'emission
	string chaineNom_;
	string chaineCodePostal_;
	string chaineAddresse_;

};

#endif 