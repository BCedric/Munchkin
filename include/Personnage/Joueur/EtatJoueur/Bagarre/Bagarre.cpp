/**
 * \file Bagarre.cpp
 * \brief implémentation classe Bagarre
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */



#include "Bagarre.hpp"

Bagarre::Bagarre(Joueur *j):EtatJoueur(j){}
Bagarre::~Bagarre(){}

void Bagarre::combattre(Carte * m){
  if(m->estMonstre()) {
	mons=m;
	Monstre * monstre = (Monstre*)mons->getCarte();
	cout<<"Le monstre a une force de : "<< monstre->getForce() <<endl;
	cout<<"Vous avez une force de : "<< joueur->getForce() <<endl;
	if(joueur->getForce() > monstre->getForce()){
		cout<<"Vous gagnez le combat"<<endl;
		for(int i=0;i<monstre->getTresors();i++){
			Carte * recomp=joueur->getJeu()->piocherTresor();
			joueur->getMain().push_back(recomp);
		}
		joueur->setNiveau(joueur->getNiveau()+monstre->getNbNiv());
		joueur->defausser(m);
		joueur->setEtat((EtatJoueur*)joueur->getFin());
		if(joueur->getNiveau()>=10){
			joueur->getJeu()->setFinPartie(true);
		}
	}
	else cout<<"Vous perdez le combat"<<endl;
  }
}





void Bagarre::deguerpir() {
	srand(time(NULL));
	int de=rand()%6+1;
	cout<<"Vous lancez le dé et faites : "<<de<<endl;
	if(de+joueur->getValDeguerpir()-6>0) cout<<"Vous arrivez à déguerpir"<<endl;
	else{
		cout<<"Le monstre vous attrape"<<endl;
		mons->appliquer(joueur);
	}
	joueur->defausser(mons);
    joueur->resetPotion();
	joueur->setEtat((EtatJoueur*)joueur->getFin());
}




void Bagarre::poserPotion(Personnage * p, Carte * po){
  if(po->estPotion()) {
	p->setPotion(po);
	joueur->defausser(po);
  }
  combattre(mons);
}



