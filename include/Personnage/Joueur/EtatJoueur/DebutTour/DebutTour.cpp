/**
 * \file DebutTour.cpp
 * \brief implémentation classe DebutTour
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#include "DebutTour.hpp"

DebutTour::DebutTour(Joueur * j):EtatJoueur(j){}

DebutTour::~DebutTour(){}

void DebutTour::piocherPorteFaceVisible(){

	Carte * c=joueur->getJeu()->piocherPorte();
	cout<<"J'ai pioché "<<c->getNom()<<endl;
	if(c->estMonstre()){
		cout<<"c'est un monstre"<<endl;
		joueur->setEtat((EtatJoueur*)joueur->getBagarre());
		joueur->getEtat()->combattre(c);

	}
	else{
		if(c->estMalediction()){
			c->appliquer(joueur);
			joueur->getJeu()->defausser(c);
			joueur->setEtat(joueur->getOuvrirLaPorte());
		}
		else{
			joueur->getMain().push_back(c);
			joueur->setEtat(joueur->getOuvrirLaPorte());
		}
	}
}

void DebutTour::changerRace(Carte * r){
	if(joueur->getRace()->getNom()!="Humain"){
		joueur->getRace()->retirer(joueur);
		joueur->getJeu()->getDefausse().push_back(joueur->getRace());

	}
	else delete joueur->getRace();
	joueur->setRace(r);
	joueur->getRace()->appliquer(joueur);
}

void DebutTour::poseEquipement(Carte * e){
	joueur->getBagage().push_back(e);
}

void DebutTour::equiper(Carte * e){
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


void DebutTour::poserMalediction(Joueur * cible, Carte * m){
  if(m->estMalediction()) {
	m->appliquer(cible);
	joueur->getJeu()->defausser(m);
  }
}






