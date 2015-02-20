/**
 * \file Potion.hpp
 * \brief declaration classe Potion
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#ifndef POTION_HPP
#define POTION_HPP

/****************************************************************************************************/


#include "../Tresor.hpp"
#include <string>
#include <iostream>

class Effet;

/****************************************************************************************************/

class Potion:public Tresor {
  public :
    /**
	*\fn	Potion(int id, std::string n, std::string d)
	*\brief Constructeur de Tresor
	*\param id Identifiant de la carte
	*\param n nom de la carte
	*\param d description de la carte
	*\param p prix de la carte
	*/
    Potion(int id, std::string n, std::string d, int p);

    /**
	*\fn	virtual ~Potion();
	*\brief  Destructeur de Potion
	*/
    virtual ~Potion();

    /**
	*\fn	bool estPotion()
	*\brief	Renvoie vrai si c'est une Potion
	*\return	vrai si c'est une Potion, Faux sinon
	*/
    bool estPotion();

  protected:

  private:
	

};

/****************************************************************************************************/

#endif

/****************************************************************************************************/

