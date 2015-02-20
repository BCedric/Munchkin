/**
 * \file Carte.cpp
 * \brief implementation classe Carte
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#include "Carte.hpp"

/****************************************************************************************************/


/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/
Carte::Carte(int id, std::string n, std::string d):identifiant(id), nom(n),description(d) {}


/****************************************************************************************************/
/**********          Destructeur                                                           **********/
/****************************************************************************************************/

Carte::~Carte() {
}


/****************************************************************************************************/
/**********          Accesseurs                                                            **********/
/****************************************************************************************************/



std::string Carte::getNom(){
  return nom;
}


std::string Carte::getDescription(){
  return description;
}

int Carte::getId() {
  return identifiant;
}
/**************************************************************************************************************/

bool Carte::compare(Carte * e){
	if(this->nom==e->getNom()){
		return true;
	}
	return false;
}

Carte * Carte::getCarte(){
  return this;
}

bool Carte::estPorte(){
	return false;
}

bool Carte::estMalediction(){
	return false;
}

bool Carte::estMonstre(){
	return false;
}

bool Carte::estRace(){
	return false;
}

bool Carte::estPotion(){
	return false;
}
bool Carte::estEquipement(){
	return false;
}

bool Carte::estArmure(){
	return false;
}

bool Carte::estChaussure(){
	return false;
}

bool Carte::estCouvreChef(){
	return false;
}

bool Carte::estMain(){
	return false;
}

bool Carte::estTresor(){
	return false;
}

void Carte::appliquer(Personnage * p) {
}

void Carte::retirer(Personnage * p) {
}

int Carte::getValeur(){
	return 0;
}

