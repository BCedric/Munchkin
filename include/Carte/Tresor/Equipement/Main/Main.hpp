/**
 * \file Main.hpp
 * \brief declaration classe Main
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/
#ifndef MAIN_HPP
#define MAIN_HPP
/****************************************************************************************************/

#include "../Equipement.hpp"
using namespace std;

/****************************************************************************************************/

class Main:public Equipement{
  public:
  
	/**
	*\fn	Main(int id, std::string n, std::string d)
	*\brief Constructeur de Main
	*\param id Identifiant de la carte
	*\param n nom de la carte
	*\param d description de la carte
	*\param p prix de la carte
	*/
    Main(int id, std::string n, std::string d, int p);
	
	/**
	*\fn	Main(int id, std::string n, std::string d)
	*\brief Constructeur de Main
	*\param id Identifiant de la carte
	*\param n nom de la carte
	*\param d description de la carte
	*\param p prix de la carte
	*\param nb nombre de mains prises par l'objet
	*/
    Main(int id, std::string n, std::string d, int p, int nb);

	/**
	*\fn	 int getNbMain();
	*\brief	Renvoie le nombre de mains prises par l'objet
	*\return	nombre de mains prises par l'objet
	*/
    int getNbMain();
	
	/**
	*\fn	bool estMain()
	*\brief	Renvoie vrai si c'est une Main
	*\return	vrai si c'est une Main, Faux sinon
	*/
    bool estMain();

  private :
    int nbMain;/*!<ombre de mains prises par l'objet*/
};

#endif
