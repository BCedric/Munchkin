/**
 * \file Attente.hpp
 * \brief declaration classe Attente
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#ifndef ATTENTE_HPP
	#define ATTENTE_HPP
	
	#include "../EtatJoueur.hpp"
	#include "../../Joueur.hpp"
	
class Equipement;
class Race;


class Attente:public EtatJoueur{
	public:
		/**
		*\fn	Attente(Joueur * t)
		*\brief	Constructeur de Attente
		*\param t Joueur dont l'état doit être géré
		*/
		Attente(Joueur * t);
		
		/**
		*\fn	~Attente()
		*\brief	Destructeur de Attente
		*/
		virtual ~Attente();
};


	
#endif


