/**
 * \file Joueur.cpp
 * \brief implÈmentation classe Joueur
 * \author Bois CÈdric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#include "Joueur.hpp"

/****************************************************************************************************/


/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//M√©thode : Joueur():Personnage()
//Param√®tre : Aucun
//Pr√©condition : Aucune
//Postcondition : Aucune
//Description : Constructeur par d√©faut
////////////////////////////////////////////////////////////////////////////////////////////////////
Joueur::Joueur(Munchkin * j, int i, Race * r):Personnage(), id(i),nbCartesMain(5),valDeguerpir(2),race(r),jeu(j){
	debut= new DebutTour(this);
	ouvrirLaPorte=new OuvrirPorte(this);
	bagarre=new Bagarre(this);
	fin=new FinTour(this);
	attente=new Attente(this);
	etat_=attente;
}


/****************************************************************************************************/
/**********          Destructeur                                                           **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//M√©thode : ~Joueur()
//Param√®tre : Aucun
//Pr√©condition : Aucune
//Postcondition : Aucune
//Description : Destructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Joueur::~Joueur(){
	delete debut;
	delete ouvrirLaPorte;
	delete bagarre;
	delete fin;
	delete attente;
	while(!main.empty()){
		delete main.back();
		main.pop_back();
	}
	while(!equipe.empty()){
		delete equipe.back();
		equipe.pop_back();
	}
	while(!bagage.empty()){
		delete bagage.back();
		bagage.pop_back();
	}

	delete race;
}

void Joueur::afficher() {
  vector<Carte*>::iterator i;
  cout<<"Vous Ítes : joueur "<< id <<endl;
  cout<<"Niveau : "<< niveau <<endl;
  cout<<"Votre race : "<< race->getNom() <<endl;
  cout<<"Votre main :"<< main.size() <<endl;
  for(i=main.begin();i!=main.end();++i) cout<<(*i)->getNom()<<endl;
  
  cout<<"Votre bagage :"<< bagage.size() <<endl;
  for(i=bagage.begin();i!=bagage.end();++i) cout<<(*i)->getNom()<<endl;
  
  cout<<"Vos Equipements actifs :"<< equipe.size() <<endl;
  for(i=equipe.begin();i!=equipe.end();++i) cout<<(*i)->getNom() <<endl;
  
  if(torse!=NULL) cout<<"Torse : "<< torse->getNom() <<endl;
  if(maing!=NULL) cout<<"Main Gauche : "<< maing->getNom() <<endl;
  if(maind!=NULL) cout<<"Main Droite : "<< maind->getNom() <<endl;
  if(tete!=NULL) cout<<"TÍte : "<< tete->getNom() <<endl;
  if(pieds!=NULL) cout<<"Pieds : "<< pieds->getNom() <<endl;
  cout<<"Votre bonus pour dÈguerpir : "<< valDeguerpir <<endl;
  cout<<"Nb cartes max en main : "<< nbCartesMain <<endl;
  cout<<endl;
}

void Joueur::defausser(Carte *c){
	jeu->defausser(c);
}

void Joueur::finTour(){
	jeu->changementJoueur(this);
}


void Joueur::equiperEquipement(Carte * e){
	e->appliquer(this);
	equipe.push_back(e);
}

void Joueur::equiperCouvreChef(Carte * c){
		if(tete!=NULL){
            tete->retirer(this);
			bagage.push_back(tete);
		}
		c->appliquer(this);
		tete=c;
}

void Joueur::equiper1Main(Carte * m){
    if(maind!=NULL){
        if(maing!=NULL){
            if(maing==maind) maing=NULL;
            maind->retirer(this);
            bagage.push_back(maind);
            maind=m;
        }
        else{
            maing=m;
        }
    }
    else{
        maind=m;
    }
    m->appliquer(this);
}

void Joueur::equiper2Main(Carte * m){
	if(maind!=maing){
		if(maind!=NULL){
            maind->retirer(this);
			bagage.push_back(maind);
		}
		if(maing!=NULL){
		    maing->retirer(this);
			bagage.push_back(maing);
		}
	}
	else{
		if(maind!=NULL){
            maind->retirer(this);
			bagage.push_back(maind);
		}
	}
	m->appliquer(this);
	maind=m;
	maing=m;


}

void Joueur::equiperArmure(Carte * a){
		if(torse!=NULL){
            torse->retirer(this);
			bagage.push_back(torse);
		}
		a->appliquer(this);
		torse=a;
}

void Joueur::equiperChaussure(Carte * c){
		if(pieds!=NULL){
            pieds->retirer(this);
			bagage.push_back(pieds);
		}
		c->appliquer(this);
		pieds=c;

}
/****************************************************************************************************/
/**********          Mutateurs                                                             **********/
/****************************************************************************************************/



void Joueur::setValDeguerpir(int val){
	valDeguerpir=val;
}

int Joueur::getValDeguerpir(){
	return valDeguerpir;
}







/****************************************************************************************************/

void Joueur::setNbCartesMain(int n){
	nbCartesMain=n;
}
int Joueur::getNbCartesMain(){
	return nbCartesMain;
}

int Joueur::getId(){
	return id;
}

void Joueur::setEtat(EtatJoueur * e){
	etat_=e;
}

EtatJoueur * Joueur::getEtat(){
	return etat_;
}

DebutTour * Joueur::getDebut(){
	return debut;
}
OuvrirPorte * Joueur::getOuvrirLaPorte(){
	return ouvrirLaPorte;
}

Bagarre * Joueur::getBagarre(){
	return bagarre;
}
FinTour * Joueur::getFin(){
	return fin;
}

Attente * Joueur::getAttente(){
	return attente;
}

vector<Carte*>&  Joueur::getBagage(){
	return bagage;

}
vector<Carte*>&  Joueur::getEquipe(){
		return equipe;
}

vector<Carte*>&  Joueur::getMain(){
	return main;
}

Munchkin * Joueur::getJeu(){
	return jeu;
}

Carte * Joueur::getRace(){
	return race;
}

void Joueur::setRace(Carte *r){
	race=r;
}

Carte * Joueur::getMaing(){
	return maing;
}

void Joueur::setMaing(Carte * m){
	maing=m;
}

Carte * Joueur::getMaind(){
	return maind;
}
void Joueur::setMaind(Carte * m){
	maind=m;
}

Carte * Joueur::getTorse(){
	return torse;
}

void Joueur::setTorse(Carte * a){
	torse=a;
}

Carte * Joueur::getPieds(){
	return pieds;
}

void Joueur::setPieds(Carte * c){
	pieds=c;
}

Carte * Joueur::getTete(){
	return tete;
}

void Joueur::setTete(Carte * c){
	tete=c;
}
