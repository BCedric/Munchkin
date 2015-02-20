/**
 * \file MalusBonus.hpp
 * \brief declaration classe MalusBonus
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#ifndef MALUSBONUS_HPP
#define MALUSBONUS_HPP

#include "../Comportement.hpp"



class MalusBonus:public Comportement{
  public:
    
	
	 /**
	*\fn	MalusBonus(Carte * c, int v);
	*\brief	Constructeur de MalusBonus
	*\param	c Carte décorée
	*\param	valeur Valeur du comportement
	*/
    MalusBonus(Carte * c, int v);

    /**
	*\fn	~MalusBonus();
	*\brief  Destructeur de MalusBonus
	*/
    ~MalusBonus();

   /**
	*\fn virtual void appliquer(Personnage * p)
	*\brief applique le comportement de la carte
	*\param	cible du comportement
	*/
    virtual void appliquer(Personnage * p);
	
	/**
	*\fn virtual void retirer(Personnage * p)
	*\brief retire le comportement de la carte
	*\param	cible du comportement
	*/
    virtual void retirer(Personnage * p);
  private:
};


#endif
