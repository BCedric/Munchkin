/**
 * \file OuvrirPorte.cpp
 * \brief implémentation classe OuvrirPorte
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#include "OuvrirPorte.hpp"

OuvrirPorte::OuvrirPorte(Joueur *j):EtatJoueur(j){}

OuvrirPorte::~OuvrirPorte(){}

void OuvrirPorte::piocherPorteFaceCache(){
	Carte * c=joueur->getJeu()->piocherPorte();
	cout<<"J'ai pioché "<<c->getNom()<<endl;
	joueur->getMain().push_back(c);
	joueur->setEtat(joueur->getFin());

}

void OuvrirPorte::changerRace(Carte * r){
	if(joueur->getRace()->getNom()!="Humain"){
		joueur->getRace()->retirer(joueur);
		joueur->getJeu()->getDefausse().push_back(joueur->getRace());
	}
	else delete joueur->getRace();
	joueur->setRace(r);
	joueur->getRace()->appliquer(joueur);
}

void OuvrirPorte::poseEquipement(Carte * e){
	joueur->getBagage().push_back(e);
}

void OuvrirPorte::equiper(Carte * e){
  if(e->estEquipement()) {
	if(e->estMain()){
      if(((Main*)e->getCarte())->getNbMain()==1) joueur->equiper1Main(e);
      else joueur->equiper2Main(e);
	}
	else if(e->estArmure())joueur->equiperArmure(e);
	else if(e->estCouvreChef())joueur->equiperCouvreChef(e);
	else if(e->estChaussure())joueur->equiperChaussure(e);
	else joueur->equiperEquipement(e);
  }
}



void OuvrirPorte::poserMalediction(Joueur * cible, Carte * m){
  if(m->estMalediction()) {
	m->appliquer(cible);
	joueur->getJeu()->defausser(m);
  }
}

void OuvrirPorte::combattre(Carte * m){
  if(m->estMonstre()) {
	joueur->setEtat(joueur->getBagarre());
	joueur->getEtat()->combattre(m);
  }
}
