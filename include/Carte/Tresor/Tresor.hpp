
/**
 * \file Tresor.hpp
 * \brief declaration classe Tresor
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#ifndef TRESOR_HPP
#define TRESOR_HPP

/****************************************************************************************************/

#include "../Carte.hpp"

class Effet;

/****************************************************************************************************/

class Tresor:public Carte {
  public:
    
	/**
	*\fn	Tresor(int id, std::string n, std::string d)
	*\brief Constructeur de Tresor
	*\param id Identifiant de la carte
	*\param n nom de la carte
	*\param d description de la carte
	*\param p prix de la carte
	*/
    Tresor(int id, std::string n, std::string d, int p);

    /**
	*\fn	virtual ~Tresor();
	*\brief  Destructeur de Tresor
	*/
    virtual ~Tresor();

	/**
	*\fn		int getPrix()
	*\brief		Renvoie le prix de la carte
	*\return	prix de la carte
	*/
    int getPrix();
	
    /**
	*\fn	bool estTresor()
	*\brief	Renvoie vrai si c'est une Tresor
	*\return	vrai si c'est un trésor, Faux sinon
	*/
	bool estTresor();

    //Mutateurs

  protected:
    //Attributs
    int prix;/*!<prix de la carte*/


  private:

}; //Class Tresor

/****************************************************************************************************/

#endif //TRESOR_HPP

/****************************************************************************************************/
