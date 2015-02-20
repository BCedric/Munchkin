/**
 * \file Equipement.hpp
 * \brief declaration classe Equipement
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#ifndef EQUIPEMENT_HPP
#define EQUIPEMENT_HPP

/****************************************************************************************************/


#include "../Tresor.hpp"
#include <string>
#include <iostream>
#include <vector>

class Effet;
class Joueur;

/****************************************************************************************************/

class Equipement:public Tresor {
  public :
    
	/**
	*\fn	Equipement(int id, std::string n, std::string d)
	*\brief Constructeur de Equipement
	*\param id Identifiant de la carte
	*\param n nom de la carte
	*\param d description de la carte
	*\param p prix de la carte
	*/
    Equipement(int id, std::string n, std::string d, int p);

    /**
	*\fn	virtual  ~Equipement();
	*\brief  Destructeur de  Equipement
	*/
    ~Equipement();

    /**
	*\fn		bool estEquipement()
	*\brief		Renvoie vrai si c'est un Equipement
	*\return	vrai si c'est une Equipement, Faux sinon
	*/
    bool estEquipement();



  protected:

}; //Class Equipement

/****************************************************************************************************/

#endif //EQUIPEMENT_HPP

/****************************************************************************************************/
