/**
 * \file CouvreChef.hpp
 * \brief declaration classe CouvreChef
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/
#ifndef COUVRECHEF_HPP
#define COUVRECHEF_HPP
/****************************************************************************************************/

#include "../Equipement.hpp"
using namespace std;

/****************************************************************************************************/

class CouvreChef:public Equipement{
  public:
  
	/**
	*\fn	CouvreChef(int id, std::string n, std::string d)
	*\brief Constructeur de CouvreChef
	*\param id Identifiant de la carte
	*\param n nom de la carte
	*\param d description de la carte
	*\param p prix de la carte
	*/
    CouvreChef(int id, std::string n, std::string d, int p);

	/**
	*\fn	bool estCouvreChef()
	*\brief	Renvoie vrai si c'est un CouvreChef
	*\return	vrai si c'est un CouvreChef, Faux sinon
	*/
    bool estCouvreChef();
};

#endif
