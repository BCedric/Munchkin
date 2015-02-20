/**
 * \file PerteObjMax.hpp
 * \brief declaration classe PerteObjMax
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

#ifndef PERTEOBJMAX_HPP
#define PERTEOBJMAX_HPP

#include "../Comportement.hpp"



class PerteObjMax:public Comportement{
  public:
    /**
	*\fn	PerteObjMax(Carte * c, int v);
	*\brief	Constructeur de PerteObjMax
	*\param	c Carte décorée
	*\param	valeur Valeur du comportement
	*/
    PerteObjMax(Carte * c, int v);

    /**
	*\fn	~PerteObjMax();
	*\brief  Destructeur de PerteObjMax
	*/
    ~PerteObjMax();
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

