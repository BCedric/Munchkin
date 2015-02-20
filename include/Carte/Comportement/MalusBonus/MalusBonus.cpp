/**
 * \file MalusBonus.cpp
 * \brief implémentation classe MalusBonus
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#include "MalusBonus.hpp"
#include "../../../Personnage/Joueur/Joueur.hpp"

MalusBonus::MalusBonus(Carte * c, int v):Comportement(0, "", "", c, v) { }

MalusBonus::~MalusBonus() { }

void MalusBonus::appliquer(Personnage * p) {
    carte->appliquer(p);
	p->setBonus(p->getBonus()+valeur);
}

void MalusBonus::retirer(Personnage * p) {
    carte->retirer(p);
	p->setBonus(p->getBonus()-valeur);
}
