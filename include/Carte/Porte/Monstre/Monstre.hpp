/**
 * \file Monstre.hpp
 * \brief declaration classe Monstre
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#ifndef MONSTRE_HPP
#define MONSTRE_HPP

/****************************************************************************************************/

#include <string>
#include "../../../Personnage/Personnage.hpp"
#include "../Porte.hpp"

using namespace std;

class Effet;

/****************************************************************************************************/

class Monstre:public Porte, public Personnage {
  public:
    
	/**
	*\fn	Monstre(int id, std::string nom, std::string d, int niv, int nbT)
	*\brief Constructeur de monstre
	*\param id Identifiant de la carte
	*\param nom nom de la carte
	*\param d description de la carte
	*\param niv niveau du monstre
	*\param nbT nombre de trésor que donne le monstre
	*/
    Monstre(int id, std::string nom, std::string d, int niv, int nbT);
	
	/**
	*\fn	Monstre(int id, std::string nom, std::string d, int niv, int nbT)
	*\brief Constructeur de monstre
	*\param id Identifiant de la carte
	*\param nom nom de la carte
	*\param d description de la carte
	*\param niv niveau du monstre
	*\param nbT nombre de trésors que donne le monstre
	*\param nbN nombre de niveaux que donne le monstre
	*/
    Monstre(int id, std::string nom, std::string d, int niv, int nbT, int nbN);

    /**
	*\fn	~Monstre();
	*\brief  Destructeur de monstre
	*/
    ~Monstre();
    
    /**
	*\fn	int getTresors()
	*\brief		renvoie le nombre de trésors que donne le monstre
	*\return 	nombre de trésors que donne le monstre
	*/
    int getTresors();
	
	/**
	*\fn	int getNbNiv()
	*\brief		renvoie le nombre de niveaux que donne le monstre
	*\return 	nombre de niveaux que donne le monstre
	*/
    int getNbNiv();
	
	
    /**
	*\fn	 bool estMonstre()
	*\brief	Renvoie vrai si c'est un Monstre
	*\return	vrai si c'est un Monstre, Faux sinon
	*/
    bool estMonstre();

  private:
    //Attributs

    int tresors;/*!<nombre de trésors que donne le monstre*/
    int nbNiv;/*!<nombre de niveaux que donne le monstre*/

}; //Class Monstre

/****************************************************************************************************/

#endif //MONSTRE_HPP

/****************************************************************************************************/
