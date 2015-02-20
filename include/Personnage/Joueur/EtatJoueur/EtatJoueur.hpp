/**
 * \file EtatJoueur.hpp
 * \brief declaration classe EtatJoueur
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#ifndef ETATJOUEUR_HPP
	#define ETATJOUEUR_HPP

	//#include "../Joueur.hpp"
	//#include "../../../Carte/Tresor/Equipement/Equipement.hpp"
	#include <iostream>
	#include <vector>

	using namespace std;



class Joueur;
class Race;
//class Munchkin;
class Personnage;
class Monstre;
class Equipement;
class Tresor;
class Carte;
class Malediction;
class Potion;


class EtatJoueur{
	protected:
		
		Joueur * joueur;/*!<Joueur dont l'état doit être géré*/

	public:
		/**
		*\fn	EtatJoueur(Joueur * t)
		*\brief	Constructeur de EtatJoueur
		*\param t Joueur dont l'état doit être géré
		*/
		EtatJoueur(Joueur * t);
		
		/**
		*\fn	~EtatJoueur()
		*\brief	Destructeur de EtatJoueur
		*/
		virtual ~EtatJoueur();

		/**
		*\fn	void piocherPorteFaceVisible()
		*\brief	Permet au joueur de piocher une carte porte face visible
		*/
		virtual void piocherPorteFaceVisible();
		
		/**
		*\fn	void piocherPorteFaceVisible()
		*\brief	Permet au joueur de piocher une carte porte face cachée
		*/
		virtual void piocherPorteFaceCache();
		
		/**
		*\fn	void changerRace(Carte * r)
		*\brief	Permet au joueur de changer de race
		*\param r nouvelle race
		*/
		virtual void changerRace(Carte * r);
		
		/**
		*\fn	void poseEquipement(Carte * e)
		*\brief	Permet au joueur de poser un équipement
		*\param e equipement à poser
		*/
		virtual void poseEquipement(Carte * e);
		
		/**
		*\fn	void equiper(Carte * e)
		*\brief	Permet au joueur d'équiper un équipement
		*\param e equipement à équiper
		*/
		virtual void equiper(Carte * e);
		
		/**
		*\fn	void combattre(Carte * m)
		*\brief	Permet au joueur de combattre un monstre
		*\param m monstre à combattre
		*/
		virtual void combattre(Carte * m);
		
		/**
		*\fn	void poserMalediction(Joueur * cible, Carte * m)
		*\brief	Permet au joueur de poser une malédiction contre un autre joueur
		*\param cible cible de la malédiction
		*\param m Malediction à poser
		*/
		virtual void poserMalediction(Joueur * cible, Carte * m);
		
		/**
		*\fn	void poserPotion(Personnage * p, Carte * po)
		*\brief	Permet au joueur de poser une potion
		*\param cible cible de la potion
		*\param po potion à poser
		*/
		virtual void poserPotion(Personnage * p, Carte * po);
		
		/**
		*\fn	void deguerpir()
		*\brief	Permet au joueur de deguerpir lorsqu'il est en combat
		*/
		virtual void deguerpir();
		
		/**
		*\fn	void defausserCarte(Carte * c)
		*\brief	Permet au joueur de défausser des cartes
		*\param c Carte à défausser
		*/
		virtual void defausserCarte(Carte * c);
		
		/**
		*\fn	void finirTour()
		*\brief	Permet au joueur de finir son tour
		*/
		virtual void finirTour();


};

#endif
