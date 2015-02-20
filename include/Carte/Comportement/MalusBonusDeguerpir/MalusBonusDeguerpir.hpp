/**
 * \file MalusBonusDeguerpir.hpp
 * \brief declaration classe MalusBonusDeguerpir
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#ifndef MALUSBONUSDEGUERPIR_HPP
	#define MALUSBONUSDEGUERPIR_HPP

#include "../Comportement.hpp"
#include "../../../Personnage/Joueur/Joueur.hpp"

class MalusBonusDeguerpir:public Comportement{
  public:
    

    /**
	*\fn	MalusBonusDeguerpir(Carte * c, int v);
	*\brief	Constructeur de MalusBonusDeguerpir
	*\param	c Carte décorée
	*\param	valeur Valeur du comportement
	*/
    MalusBonusDeguerpir(Carte * c, int v);

    /**
	*\fn	~MalusBonusDeguerpir();
	*\brief  Destructeur de MalusBonusDeguerpir
	*/
    ~MalusBonusDeguerpir();
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

  protected:
    //Attributs

  private:

};


#endif

