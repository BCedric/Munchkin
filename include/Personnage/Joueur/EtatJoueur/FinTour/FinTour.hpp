/**
 * \file FinTour.hpp
 * \brief declaration classe FinTour
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#ifndef FINTOUR_HPP
	#define FINTOUR_HPP

	#include "../EtatJoueur.hpp"
	#include "../../Joueur.hpp"
	//#include "../../../../Munchkin/Munchkin.hpp"
	class Equipement;


class FinTour:public EtatJoueur{
	public:
		/**
		*\fn	FinTour(Joueur * t)
		*\brief	Constructeur de FinTour
		*\param t Joueur dont l'état doit être géré
		*/
		FinTour(Joueur * t);
		
		/**
		*\fn	~FinTour()
		*\brief	Destructeur de FinTour
		*/
		virtual ~FinTour();

		/**
		*\fn	void finirTour()
		*\brief	Permet au joueur de finir son tour
		*/
		void finirTour();
		
		/**
		*\fn	void defausserCarte(Carte * c)
		*\brief	Permet au joueur de défausser des cartes
		*\param c Carte à défausser
		*/
		void defausserCarte(Carte * c);
		
		/**
		*\fn	void changerRace(Carte * r)
		*\brief	Permet au joueur de changer de race
		*\param r nouvelle race
		*/
		void changerRace(Carte * r);
		
		/**
		*\fn	void poseEquipement(Carte * e)
		*\brief	Permet au joueur de poser un équipement
		*\param e equipement à poser
		*/
		void poseEquipement(Carte * e);
		
		/**
		*\fn	void equiper(Carte * e)
		*\brief	Permet au joueur d'équiper un équipement
		*\param e equipement à équiper
		*/
		void equiper(Carte * e);
		
		/**
		*\fn	void poserMalediction(Joueur * cible, Carte * m)
		*\brief	Permet au joueur de poser une malédiction contre un autre joueur
		*\param cible cible de la malédiction
		*\param m Malediction à poser
		*/
		void poserMalediction(Joueur * cible, Carte * m);

};



#endif

