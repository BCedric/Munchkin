/**
 * \file FinTour.cpp
 * \brief implémentation classe FinTour
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#include "FinTour.hpp"

FinTour::FinTour(Joueur * j):EtatJoueur(j){
	}

FinTour::~FinTour(){}

void FinTour::finirTour(){
	if(joueur->getMain().size()<=joueur->getNbCartesMain()){
		joueur->setEtat(joueur->getFin());
		joueur->finTour();
	}
	else{
		cout<<"Vous devez défausser de cartes pour n'en avoir plus que 5 en main"<<endl;
	}
}

void FinTour::defausserCarte(Carte * c){
	joueur->defausser(c);
}

void FinTour::changerRace(Carte * r){
  if(r->estRace()) {
	if(joueur->getRace()->getNom()!="Humain"){
		joueur->getRace()->retirer(joueur);
		joueur->getJeu()->getDefausse().push_back(joueur->getRace());

	}
	else delete joueur->getRace();
	joueur->setRace(r);
	joueur->getRace()->appliquer(joueur);
  }
}

void FinTour::poseEquipement(Carte * e){
	joueur->getBagage().push_back(e);
}

void FinTour::equiper(Carte * e){
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

void FinTour::poserMalediction(Joueur * cible, Carte * m){
  if(m->estMalediction()) {
	m->appliquer(cible);
	joueur->getJeu()->defausser(m);
  }
}
