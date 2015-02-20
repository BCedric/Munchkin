/**
 * \file Armure.hpp
 * \brief declaration classe Armure
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/
#ifndef ARMURE_HPP
#define ARMURE_HPP
/****************************************************************************************************/

#include "../Equipement.hpp"
using namespace std;

class Joueur;
class Equipement;

/****************************************************************************************************/

class Armure:public Equipement{
  public:
	
	/**
	*\fn	Armure(int id, std::string n, std::string d)
	*\brief Constructeur de Armure
	*\param id Identifiant de la carte
	*\param n nom de la carte
	*\param d description de la carte
	*\param p prix de la carte
	*/
    Armure(int id, std::string n, std::string d, int p);

	/**
	*\fn	bool estArmure()
	*\brief	Renvoie vrai si c'est une Armure
	*\return	vrai si c'est une Armure, Faux sinon
	*/
    bool estArmure();
};


#endif
