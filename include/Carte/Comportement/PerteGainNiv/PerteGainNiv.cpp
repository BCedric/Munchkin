/**
 * \file PerteGainNiv.cpp
 * \brief implémentation classe PerteGainNiv
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#include "PerteGainNiv.hpp"
#include "../../../Personnage/Joueur/Joueur.hpp"

PerteGainNiv::PerteGainNiv(Carte * c, int v):Comportement(0, "", "", c, v) { }

PerteGainNiv::~PerteGainNiv() { }

void PerteGainNiv::appliquer(Personnage * p) {
  if(typeid(*p )==typeid(Joueur)){
    if(p->getNiveau()+valeur>9){
      cout<<"Vous devez gagner le dernier niveau en combattant un monstre"<<endl;
      ((Joueur*)p)->setNiveau(9);
    }
    else if(p->getNiveau()+valeur>=1){
      ((Joueur*)p)->setNiveau(((Joueur*)p)->getNiveau()+valeur);
    }
    else{
      ((Joueur*)p)->setNiveau(1);
    }
  }
}

