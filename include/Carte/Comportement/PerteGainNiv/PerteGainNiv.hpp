/**
 * \file PerteGainNiv.hpp
 * \brief declaration classe PerteGainNiv
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#ifndef PERTEGAINNIV_HPP
	#define PERTEGAINNIV_HPP

#include "../Comportement.hpp"
#include "../../../Personnage/Joueur/Joueur.hpp"

class PerteGainNiv:public Comportement {
  public:
    /**
	*\fn	PerteGainNiv(Carte * c, int v);
	*\brief	Constructeur de PerteGainNiv
	*\param	c Carte décorée
	*\param	valeur Valeur du comportement
	*/
    PerteGainNiv(Carte * c, int v);

    /**
	*\fn	~PerteGainNiv();
	*\brief  Destructeur de PerteGainNiv
	*/
    ~PerteGainNiv();
	
	

    /**
	*\fn virtual void appliquer(Personnage * p)
	*\brief applique le comportement de la carte
	*\param	cible du comportement
	*/
    virtual void appliquer(Personnage * p);
    
  protected:
    //Attributs

  private:

};


#endif


