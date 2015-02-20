/**
 * \file PerteObjMax.cpp
 * \brief implémentation classe PerteObjMax
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#include "PerteObjMax.hpp"
#include "../../../Personnage/Joueur/Joueur.hpp"


PerteObjMax::PerteObjMax(Carte * c, int v):Comportement(0, "", "", c, v){ }

PerteObjMax::~PerteObjMax() { }

void PerteObjMax::appliquer(Personnage * p) {
  if(typeid(*p )==typeid(Joueur)){
    Carte * e=(*((Joueur*)p)->getEquipe().begin());
    int it=0,max=0;
    vector<Carte*>::iterator i;
    for(i=((Joueur*)p)->getEquipe().begin();i!=((Joueur*)p)->getEquipe().end();++i){
      if((*i)->getValeur()>e->getValeur()){
        max=it;
        e=*i;
      }
      ++it;
    }
    i=((Joueur*)p)->getEquipe().begin();
    ((Joueur*)p)->getJeu()->getDefausse().push_back((*i+max));
    ((Joueur*)p)->getEquipe().erase(i+max);
  }
}
