/**
 * \file Porte.hpp
 * \brief déclaration classe Porte
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#ifndef PORTE_HPP
#define PORTE_HPP

/****************************************************************************************************/

#include "../Carte.hpp"

/****************************************************************************************************/

class Porte:public Carte {
  public:
    /**
	*\fn	Porte(int id, std::string n, std::string d)
	*\brief Constructeur de Porte
	*\param id Identifiant de la carte
	*\param nom nom de la carte
	*\param description description de la carte
	*/
    Porte(int id, std::string nom, std::string description);

    /**
	*\fn	virtual  ~Porte();
	*\brief  Destructeur de Porte
	*/
    virtual ~Porte();

    /**
	*\fn	bool estPorte()
	*\brief	Renvoie vrai si c'est une Porte
	*\return	vrai si c'est une Porte, Faux sinon
	*/
    bool estPorte();

  protected:

  private:

}; //Class Porte

/****************************************************************************************************/

#endif //PORTE_HPP

/****************************************************************************************************/
