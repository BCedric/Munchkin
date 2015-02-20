
/**
 * \file Race.hpp
 * \brief declaration classe Race
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#ifndef RACE_HPP
#define RACE_HPP

#include "../Porte.hpp"
#include<string>

class Joueur;

using namespace std;



class Race:public Porte{
	protected:

	public:
		/**
		*\fn	Race(int id, std::string n, std::string d)
		*\brief Constructeur de Race
		*\param id Identifiant de la carte
		*\param nom nom de la carte
		*\param description description de la carte
		*/
		Race(int id, std::string nom, std::string description);
		
		/**
		*\fn	virtual ~Race();
		*\brief  Destructeur de Race
		*/
		~Race();
		
		/**
		*\fn	void poser(Joueur * j)
		*\brief	Applique le comportement de la carte
		*/
		void poser(Joueur * j);
		
		/**
		*\fn	bool estRace()
		*\brief	Renvoie vrai si c'est une Race
		*\return	vrai si c'est une Race, Faux sinon
		*/
		bool estRace();

};

#endif
