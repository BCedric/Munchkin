/**
 * \file OuvrirPorte.hpp
 * \brief declaration classe OuvrirPorte
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#ifndef OUVRIRPORTE_HPP
	#define OUVRIRPORTE_HPP

	#include "../EtatJoueur.hpp"
	#include "../../Joueur.hpp"
	#include "../../../../Carte/Carte.hpp"
	#include "../../../../Carte/Porte/Monstre/Monstre.hpp"
	#include "../../../../Carte/Porte/Malediction/Malediction.hpp"
	#include <typeinfo>

	class Equipement;



class OuvrirPorte:public EtatJoueur{
	private:

	public:
		/**
		*\fn	OuvrirPorte(Joueur * t)
		*\brief	Constructeur de OuvrirPorte
		*\param t Joueur dont l'état doit être géré
		*/
		OuvrirPorte(Joueur * t);
		
		/**
		*\fn	~OuvrirPorte()
		*\brief	Destructeur de OuvrirPorte
		*/
		virtual ~OuvrirPorte();

		/**
		*\fn	void piocherPorteFaceVisible()
		*\brief	Permet au joueur de piocher une carte porte face cachée
		*/
		void piocherPorteFaceCache();
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
		
		/**
		*\fn	void combattre(Carte * m)
		*\brief	Permet au joueur de combattre un monstre
		*\param m monstre à combattre
		*/
		void combattre(Carte * m);

};




#endif
