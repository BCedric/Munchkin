/**
 * \file Munchkin.cpp
 * \brief implementation classe Munchkin
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#include "Munchkin.hpp"

/****************************************************************************************************/

int myrandom (int i) { return std::rand()%i;}


/****************************************************************************************************/
/**********          Constructeur                                                          **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : Munchkin(std::string filename)
//Paramètre : Aucun
//Précondition : Aucune
//Postcondition : Aucune
//Description : Constructeur par défaut
////////////////////////////////////////////////////////////////////////////////////////////////////
Munchkin::Munchkin(std::string filename, int nbJoueurs):finPartie(false) {
  std::srand ( unsigned ( std::time(0) ) );
  fabriquePortes = new FabriquePorte();
  fabriqueTresors = new FabriqueTresor();
  
  //CREATION DES CARTES
  importerCartes(filename);
  
  //Melange des pioches
  random_shuffle(Portes.begin(), Portes.end(), myrandom);
  random_shuffle(Tresors.begin(), Tresors.end(),myrandom);
    
  //CREATION DES JOUEURS
  for(int i=0;i<nbJoueurs;++i){
    joueurs.push_back(new Joueur(this,i, new Race(0,"Humain","")));
  }
  for(vector<Joueur*>::iterator it=joueurs.begin();it!=joueurs.end();++it){
    (*it)->getMain().push_back(piocherPorte());
    (*it)->getMain().push_back(piocherPorte());
    (*it)->getMain().push_back(piocherTresor());
    (*it)->getMain().push_back(piocherTresor());
  }
  courant=joueurs.front();
  courant->setEtat(courant->getDebut());
}


void Munchkin::importerCartes(std::string filename) {
  std::string ligne;
  std::vector<string> champs;

  std::ifstream ifs(filename.c_str());
  // filename est le nom du ficher de cartes
  if(ifs) {
    while (getline(ifs, ligne)) {
      std::istringstream iss(ligne);
      champs=fabriquePortes->decompString(ligne);
      if(champs.size()>0){
        if(champs.front()=="Equipement" || champs.front()=="Potion" || champs.front()=="Armure" || champs.front()=="Chaussure" || champs.front()=="Main" || champs.front()=="CouvreChef"){
          Tresors.push_back(fabriqueTresors->fabriquer(champs));
        }
        else if(champs.front()=="Malediction" || champs.front()=="Monstre" || champs.front()=="Race"){
          Portes.push_back(fabriquePortes->fabriquer(champs));
        }
      }
    }
  }
}


/****************************************************************************************************/
/**********          Destructeur                                                           **********/
/****************************************************************************************************/

////////////////////////////////////////////////////////////////////////////////////////////////////
//Méthode : ~Munchkin()
//Paramètre : Aucun
//Précondition : Aucune
//Postcondition : Aucune
//Description : Destructeur
////////////////////////////////////////////////////////////////////////////////////////////////////
Munchkin::~Munchkin() {
	while(!joueurs.empty()){
		delete joueurs.back();
		joueurs.pop_back();
	}
	while(!defausse.empty()){
		delete defausse.back();
		defausse.pop_back();
	}
	while(!Portes.empty()){
		delete Portes.back();
		Portes.pop_back();
	}
	while(!Tresors.empty()){
		delete Tresors.back();
		Tresors.pop_back();
	}
	delete fabriquePortes;
	delete fabriqueTresors;
}

/****************************************************************************************************/



Carte * Munchkin::piocherPorte(){
	if(Portes.size()==0){
		vector<Carte*>::iterator i;
		for(i=defausse.begin();i!=defausse.end();++i){
			if(typeid((*i)->getCarte())==typeid(Malediction) || typeid((**i))==typeid(Monstre) || typeid((**i))==typeid(Race)){
				Portes.push_back((Porte*)*i);
				defausse.erase(i);
				i--;
			}
		}
		random_shuffle(Portes.begin(), Portes.end());
	}
	if(Portes.size()==0){
		cout<<"Impossible de continuer, il n'y a plus de carte dans la pioche"<<endl;
		finPartie=true;
		return NULL;
	}
	else{

		Carte * res= Portes.front();
		Portes.erase(Portes.begin());
		return res;
	}
}

Carte * Munchkin::piocherTresor(){
	if(Tresors.size()==0){
		vector<Carte*>::iterator i;
		for(i=defausse.begin();i!=defausse.end();++i){
			if(typeid((*i)->getCarte())==typeid(Equipement) || typeid((**i))==typeid(Potion)){
				Tresors.push_back(*i);
				defausse.erase(i);
				i--;
			}
		}
		random_shuffle(Tresors.begin(), Tresors.end());
	}
	if(Tresors.size()==0){
		cout<<"Impossible de continuer, il n'y a plus de carte dans la pioche"<<endl;
		finPartie=true;
		return NULL;
	}
	else{
		Carte * res= Tresors.front();
		Tresors.erase(Tresors.begin());
		return res;
	}
}

void Munchkin::defausser(Carte * c){
	defausse.push_back(c);
}

void Munchkin::changementJoueur(Joueur * j){
	unsigned int id=j->getId();
	if(id>=joueurs.size()-1){
		courant=*joueurs.begin();
	}
	else{
		vector<Joueur*>::iterator it=joueurs.begin();
		for(unsigned int i=0;i!=id+1;++i){
			it++;
		}
		courant=*it;
	}
	courant->setEtat(courant->getDebut());
	cout<<"Nouv courant : " <<courant->getId()<<endl;
	cout<<joueurs.size()<<endl;
}

bool Munchkin::getFinPartie(){
	return finPartie;
}

void Munchkin::setFinPartie(bool b){
	finPartie=b;
}

std::vector<Carte*>& Munchkin::getPortes(){
	return Portes;
}



std::vector<Carte*>& Munchkin::getTresors(){
	return Tresors;
}

std::vector<Carte*>& Munchkin::getDefausse(){
	return defausse;
}

Joueur * Munchkin::getCourant(){
	return courant;
}

std::vector<Joueur*>& Munchkin::getJoueurs(){
	return joueurs;
}
