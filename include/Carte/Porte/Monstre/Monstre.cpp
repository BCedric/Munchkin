/**
 * \file Monstre.cpp
 * \brief implementation classe Monstre
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#include "Monstre.hpp"

/****************************************************************************************************/


/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/
Monstre::Monstre(int id, std::string nom, std::string d, int niv, int nbT):Porte(id, nom, d), Personnage(niv), tresors(nbT), nbNiv(1){}
Monstre::Monstre(int id, std::string nom, std::string d, int niv, int nbT, int nbN):Porte(id, nom, d), Personnage(niv), tresors(nbT), nbNiv(nbN) {}



/****************************************************************************************************/
/**********          Destructeur                                                           **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : ~Monstre()
//Paramètre : Aucun
//Précondition : Aucune
//Postcondition : Aucune
//Description : Destructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Monstre::~Monstre() {
}

/****************************************************************************************************/

int Monstre::getTresors(){
	return tresors;
}

int Monstre::getNbNiv(){
	return nbNiv;
}

bool Monstre::estMonstre(){
  return true;
}
