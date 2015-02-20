/**
 * \file Comportement.cpp
 * \brief implementation classe Comportement
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#include "Comportement.hpp"

/****************************************************************************************************/

/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/
Comportement::Comportement(int id, std::string n, std::string d, Carte * c, int v):Carte(id, n, d), carte(c), valeur(v) { }


/****************************************************************************************************/
/**********          Destructeur                                                           **********/
/****************************************************************************************************/

Comportement::~Comportement(){
  delete carte;
}

/****************************************************************************************************/

/****************************************************************************************************/
/********** Accesseurs **********/
/****************************************************************************************************/
std::string Comportement::getNom(){
  return carte->getNom();
}

std::string Comportement::getDescription(){
  return carte->getDescription();
}



Carte * Comportement::getCarte() {
  return carte->getCarte();
}

bool Comportement::estPorte(){
	return carte->estPorte();
}

bool Comportement::estMalediction(){
	return carte->estMalediction();
}

bool Comportement::estMonstre(){
	return carte->estMonstre();
}

bool Comportement::estRace(){
	return carte->estRace();
}

bool Comportement::estPotion(){
	return carte->estPotion();
}
bool Comportement::estEquipement(){
	return carte->estEquipement();
}

bool Comportement::estArmure(){
	return carte->estArmure();
}

bool Comportement::estChaussure(){
	return carte->estChaussure();
}

bool Comportement::estCouvreChef(){
	return carte->estCouvreChef();
}

bool Comportement::estMain(){
	return carte->estMain();
}

void Comportement::appliquer(Personnage * p) {
  carte->appliquer(p);
}

void Comportement::retirer(Personnage * p) {
  carte->retirer(p);
}

int Comportement::getValeur() {
	return carte->getValeur() + valeur;
}
