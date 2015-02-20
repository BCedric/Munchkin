/**
 * \file MalusBonusDeguerpir.cpp
 * \brief implémentation classe MalusBonusDeguerpir
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#include "MalusBonusDeguerpir.hpp"

MalusBonusDeguerpir::MalusBonusDeguerpir(Carte * c, int v):Comportement(0, "", "", c, v){ }

MalusBonusDeguerpir::~MalusBonusDeguerpir() { }

void MalusBonusDeguerpir::appliquer(Personnage * p) {
	if(typeid(*p )==typeid(Joueur)) ((Joueur*)p)->setValDeguerpir(((Joueur*)p)->getValDeguerpir()+valeur);
}

void MalusBonusDeguerpir::retirer(Personnage * p) {
	if(typeid(*p )==typeid(Joueur)) ((Joueur*)p)->setValDeguerpir(((Joueur*)p)->getValDeguerpir()-valeur);
}
