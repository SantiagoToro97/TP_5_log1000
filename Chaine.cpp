#include "Chaine.h"




Chaine::Chaine(string nom, string code, string adresse) {
	chaineNom_ = nom;
	chaineCodePostal_ = code;
	chaineAddresse_ = adresse;
}


string Chaine::getChaineName() {
	return chaineNom_;
}

string chaine::getChaineCodePostal() {
	return chaineCodePostal_;
}

string Chaine::getChaineAddress() {
	return chaineAddresse_;
}