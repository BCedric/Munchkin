/**
 * \file Personnage.cpp
 * \brief implémentation classe Personnage
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#include "Personnage.hpp"

/****************************************************************************************************/


/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : Personnage()
//Paramètre : Aucun
//Précondition : Aucune
//Postcondition : Aucune
//Description : Constructeur par défaut
////////////////////////////////////////////////////////////////////////////////////////////////////
Personnage::Personnage():niveau(1),bonus(0){}

////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : Personnage(int niv)
//Paramètre : Aucun
//Précondition : Aucune
//Postcondition : Aucune
//Description : Constructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Personnage::Personnage(int niv):niveau(niv),bonus(0) {}


/****************************************************************************************************/
/**********          Destructeur                                                           **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : ~Personnage()
//Paramètre : Aucun
//Précondition : Aucune
//Postcondition : Aucune
//Description : Destructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Personnage::~Personnage() {
}

/****************************************************************************************************/
/**********          Accesseurs                                                            **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : getNiveau()
//Paramètre : Aucun
//Précondition : Aucune
//Postcondition : Aucune
//Description : Affiche la carte
////////////////////////////////////////////////////////////////////////////////////////////////////
int Personnage::getNiveau() {
  return niveau;
}

void Personnage::setNiveau(int n){
	niveau=n;
}

int Personnage::getBonus(){
	return bonus;
}

void Personnage::setBonus(int b){
	bonus=b;
}

int Personnage::getForce() {
  return niveau + bonus;
}
void Personnage::setPotion(Carte * po){
  po->appliquer(this);
  potions.push_back(po);
}

void Personnage::resetPotion(){
  std::vector<Carte*>::iterator i;
  for(i=potions.begin();i!=potions.end();++i){
    (*i)->retirer(this);
  }
}

/****************************************************************************************************/
