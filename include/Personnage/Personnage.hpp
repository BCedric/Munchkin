/**
 * \file Personnage.hpp
 * \brief declaration classe Personnage
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include <vector>
#include "../Carte/Tresor/Potion/Potion.hpp"

/****************************************************************************************************/

class Personnage {
  public:
    
	/**
	*\fn	Personnage()
	*\brief	Constructeur de Personnage
	*/
    Personnage();
	
	/**
	*\fn	Personnage()
	*\brief	Constructeur de Personnage
	*\param niv Niveau du personnage
	*/
    Personnage(int niv);

    /**
	*\fn	~Personnage()
	*\brief	Destructeur de Personnage
	*/
    virtual ~Personnage();

    /**
	*\fn	int getNiveau()
	*\brief	Renvoie le niveau du personnage
	*\return niveau du personnage
	*/
    int getNiveau();
	
	/**
	*\fn	void setNiveau(int n)
	*\brief	Change la valeur du niveau du personnage
	*\param n nouveau niveau du personnage
	*/
    void setNiveau(int n);
	
	/**
	*\fn	int getBonus()
	*\brief	Renvoie le bonus du personnage
	*\return bonus du personnage
	*/
    int getBonus();
	
	/**
	*\fn	void setBonus(int b)
	*\brief	Change la valeur du bonus du personnage
	*\param b nouveau bonus du personnage
	*/
    void setBonus(int b);
	
	/**
	*\fn	int getForce()
	*\brief	Renvoie la force du personnage (bonus+niveau)
	*\return force du personnage
	*/
    int getForce();
	
	/**
	*\fn	void setPotion(Carte * po)
	*\brief	Ajoute une potion à la liste de potions
	*\param b potion à ajouter
	*/
    void setPotion(Carte * po);
	
	/**
	*\fn	void resetPotion()
	*\brief	Vide la liste de potions
	*/
    void resetPotion();

  protected:
    //Attributs
    int niveau;/*!< niveau du personnage*/
    int bonus;/*!< bonus du personnage*/
    std::vector<Carte*> potions;/*!<liste de potion s'appliquant sur le personnage*/

  private:

}; //Class Personnage

/****************************************************************************************************/

#endif //PERSONNAGE_HPP

/****************************************************************************************************/
