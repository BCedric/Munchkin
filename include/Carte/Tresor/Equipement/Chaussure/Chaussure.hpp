/**
 * \file Chaussure.hpp
 * \brief declaration classe Chaussure
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/
#ifndef CHAUSSURE_HPP
#define CHAUSSURE_HPP
/****************************************************************************************************/

#include "../Equipement.hpp"
using namespace std;

/****************************************************************************************************/

class Chaussure:public Equipement{
  public:
  
	/**
	*\fn	Chaussure(int id, std::string n, std::string d)
	*\brief Constructeur de Chaussure
	*\param id Identifiant de la carte
	*\param n nom de la carte
	*\param d description de la carte
	*\param p prix de la carte
	*/
    Chaussure(int id, std::string n, std::string d, int p);

	/**
	*\fn	bool estChaussure()
	*\brief	Renvoie vrai si c'est une Chaussure
	*\return	vrai si c'est une Chaussure, Faux sinon
	*/
    bool estChaussure();

};


#endif
