/**
 * \file DebutTour.hpp
 * \brief declaration classe DebutTour
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#ifndef DEBUTTOUR_HPP
	#define DEBUTTOUR_HPP

	#include "../EtatJoueur.hpp"
	#include "../../Joueur.hpp"
	#include "../../../../Carte/Tresor/Equipement/Equipement.hpp"




class DebutTour:public EtatJoueur{
	public:
		/**
		*\fn	DebutTour(Joueur * t)
		*\brief	Constructeur de DebutTour
		*\param t Joueur dont l'état doit être géré
		*/
		DebutTour(Joueur * t);
		
		/**
		*\fn	~DebutTour()
		*\brief	Destructeur de DebutTour
		*/
		virtual ~DebutTour();

		/**
		*\fn	void piocherPorteFaceVisible()
		*\brief	Permet au joueur de piocher une carte porte face visible
		*/
		void piocherPorteFaceVisible();

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


	private:





};



#endif
