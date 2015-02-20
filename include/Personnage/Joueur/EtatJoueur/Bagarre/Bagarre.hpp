/**
 * \file Bagarre.hpp
 * \brief declaration classe Bagarre
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#ifndef BAGARRE_HPP
#define BAGARRE_HPP

#include "../../../../Carte/Carte.hpp"
#include <time.h>
#include <stdlib.h>
#include "../EtatJoueur.hpp"
#include "../../Joueur.hpp"
//#include "../../../../Munchkin/Munchkin.hpp"
#include "../../../../Carte/Tresor/Equipement/Equipement.hpp"


using namespace std;
class Equipement;
class Race;

class Bagarre:public EtatJoueur{
	private :

		Carte * mons;


	public:
		/**
		*\fn	Bagarre(Joueur * t)
		*\brief	Constructeur de Bagarre
		*\param t Joueur dont l'état doit être géré
		*/
		Bagarre(Joueur * t);
		
		/**
		*\fn	~Bagarre()
		*\brief	Destructeur de Bagarre
		*/
		virtual ~Bagarre();

		/**
		*\fn	void combattre(Carte * m)
		*\brief	Permet au joueur de combattre un monstre
		*\param m monstre à combattre
		*/
		void combattre(Carte * m);
		
		/**
		*\fn	void deguerpir()
		*\brief	Permet au joueur de deguerpir lorsqu'il est en combat
		*/
		void deguerpir();
		
		/**
		*\fn	void poserPotion(Personnage * p, Carte * po)
		*\brief	Permet au joueur de poser une potion
		*\param cible cible de la potion
		*\param po potion à poser
		*/
		void poserPotion(Personnage * p, Carte * po);


};


#endif
