/**
 * \file EtatJoueur.cpp
 * \brief implémentation classe EtatJoueur
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#include "EtatJoueur.hpp"


EtatJoueur::EtatJoueur(Joueur * j): joueur(j){
}

EtatJoueur::~EtatJoueur(){}

/*********************************************************************/
/*********************ACTIONS POSSIBLES*******************************/
/*********************************************************************/

void EtatJoueur::piocherPorteFaceVisible(){
	cout<<"Vous ne pouvez pas piocher pour l'instant"<<endl;
}

void EtatJoueur::piocherPorteFaceCache(){
	cout<<"Vous ne pouvez pas piocher pour l'instant"<<endl;
}

void EtatJoueur::changerRace(Carte * r){

	cout<<"Vous ne pouvez pas changer de Race maintenant"<<endl;

}

void EtatJoueur::poseEquipement(Carte * e){
	cout<<"Vous ne pouvez pas changer votre équipement maintenant"<<endl;
}

void EtatJoueur::equiper(Carte * e){
	cout<<"Vous ne pouvez pas changer votre équipement maintenant"<<endl;
}


void EtatJoueur::combattre(Carte * m){
	cout<<"Vous ne pouvez pas poser de monstre maintenant"<<endl;
}

void EtatJoueur::poserMalediction(Joueur * cible, Carte * m){
	cout<<"Vous ne pouvez pas poser de malediction maintenant"<<endl;
}

void EtatJoueur::poserPotion(Personnage * p, Carte * po){
	cout<<"impossible de poser une potion maintenant"<<endl;
}

void EtatJoueur::deguerpir(){
	cout<<"Vous ne pouvez pas deguerpir si vous n'êtes pas poursuivi"<<endl;
}

void EtatJoueur::defausserCarte(Carte * c){
	cout<<"Vous ne pouvez pas défausser de carte maintenant"<<endl;
}
void EtatJoueur::finirTour(){
	cout<<"Ce n'est pas le moment de terminer le tour !"<<endl;
}
