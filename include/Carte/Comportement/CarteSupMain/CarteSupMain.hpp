/**
 * \file CarteSupMain.hpp
 * \brief declaration classe CarteSupMain
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#ifndef CARTESUPMAIN_HPP
#define CARTESUPMAIN_HPP



#include "../../../Personnage/Joueur/Joueur.hpp"
#include "../Comportement.hpp"


class CarteSupMain:public Comportement{
  public:
  
    /**
	*\fn	CarteSupMain(Carte * c, int v);
	*\brief	Constructeur de CarteSupMain
	*\param	c Carte décorée
	*\param	valeur Valeur du comportement
	*/
    CarteSupMain(Carte * c, int v);

    /**
	*\fn	~CarteSupMain();
	*\brief  Destructeur de CarteSupMain
	*/
    ~CarteSupMain();
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
