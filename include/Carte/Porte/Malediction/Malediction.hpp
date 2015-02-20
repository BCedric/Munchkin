/**
 * \file Malediction.hpp
 * \brief déclaration classe Malediction
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#ifndef MALEDICTION_HPP
	#define MALEDICTION_HPP

#include "../Porte.hpp"
#include <string>

class Effet;

class Malediction:public Porte{
  public:
	/**
	*\fn	Porte(int id, std::string n, std::string d)
	*\brief Constructeur de Porte
	*\param id Identifiant de la carte
	*\param nom nom de la carte
	*\param description description de la carte
	*/
    Malediction(int id, std::string nom, std::string description);

    /**
	*\fn	virtual bool estMalediction()
	*\brief	Renvoie vrai si c'est une Malediction
	*\return	vrai si c'est une Malediction, Faux sinon
	*/
    virtual bool estMalediction();

  private:


};



#endif
