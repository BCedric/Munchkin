/**
 * \file Comportement.hpp
 * \brief declaration classe Comportement
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#ifndef COMPORTEMENT_HPP
#define COMPORTEMENT_HPP

/****************************************************************************************************/

#include <iostream>
#include "../Carte.hpp"
//#include "../../Personnage/Joueur/Joueur.hpp"

/****************************************************************************************************/

class Comportement:public Carte {
  public:
  
	/**
	*\fn	Comportement(int id, std::string n, std::string d, Carte * c, int valeur);
	*\brief	Constructeur de comportement
	*\param	id identifiant de la carte
	*\param	n nom du comportement
	*\param	d description du comportement
	*\param	c Carte décorée
	*\param	valeur Valeur du comportement
	*/
    Comportement(int id, std::string n, std::string d, Carte * c, int valeur);

    /**
	*\fn	virtual  ~Comportement();
	*\brief  Destructeur de Comportement
	*/
    ~Comportement();

    /**
	*\fn	virtual std::string getNom()
	*\brief	Renvoie le nom de la carte
	*\return nom de la carte
	*/
    virtual std::string getNom();
	
	/**
	*\fn	virtual std::string getDescription()
	*\brief	Renvoie la description de la carte
	*\return description de la carte
	*/
    virtual std::string getDescription();
	
	/**
	*\fn  virtual Carte * getCarte()
	*\brief	Renvoie un pointeur sur cet élément
	*\return	pointeur sur cet élément
	*/
    virtual Carte * getCarte();
	
	/**
	*\fn	virtual bool estPorte()
	*\brief	Renvoie vrai si c'est une Porte
	*\return	vrai si c'est une Porte, Faux sinon
	*/
    virtual bool estPorte();
	
	/**
	*\fn	virtual bool estMalediction()
	*\brief	Renvoie vrai si c'est une Malediction
	*\return	vrai si c'est une Malediction, Faux sinon
	*/
    virtual bool estMalediction();
	
	/**
	*\fn	virtual bool estMonstre()
	*\brief	Renvoie vrai si c'est un Monstre
	*\return	vrai si c'est un Monstre, Faux sinon
	*/
    virtual bool estMonstre();
	
	/**
	*\fn	virtual bool estRace()
	*\brief	Renvoie vrai si c'est une Race
	*\return	vrai si c'est une Race, Faux sinon
	*/
    virtual bool estRace();
	
	/**
	*\fn	virtual bool estPotion()
	*\brief	Renvoie vrai si c'est une Potion
	*\return	vrai si c'est une Potion, Faux sinon
	*/
    virtual bool estPotion();
	
	/**
	*\fn	virtual bool estEquipement()
	*\brief	Renvoie vrai si c'est un Equipement
	*\return	vrai si c'est une Equipement, Faux sinon
	*/
    virtual bool estEquipement();
	
	/**
	*\fn	virtual bool estArmure()
	*\brief	Renvoie vrai si c'est une Armure
	*\return	vrai si c'est une Armure, Faux sinon
	*/
    virtual bool estArmure();
	
	/**
	*\fn	virtual bool estChaussure()
	*\brief	Renvoie vrai si c'est une Chaussure
	*\return	vrai si c'est une Chaussure, Faux sinon
	*/
    virtual bool estChaussure();
	
	/**
	*\fn	virtual bool estCouvreChef()
	*\brief	Renvoie vrai si c'est un CouvreChef
	*\return	vrai si c'est un CouvreChef, Faux sinon
	*/
    virtual bool estCouvreChef();
	
	/**
	*\fn	virtual bool estMain()
	*\brief	Renvoie vrai si c'est une Main
	*\return	vrai si c'est une Main, Faux sinon
	*/
    virtual bool estMain();
	
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
	
	/**
	*\fn virtual int getValeur();
	*\brief	renvoie la valeur du comportement
	*\return	la valeur du comportement
	*/
	virtual int getValeur();

  protected:
    //Attributs
    Carte * carte; /*!<Carte décorée*/
    int valeur;/*!<valeur du comportement*/

  private:

}; //Class Comportement

/****************************************************************************************************/

#endif //COMPORTEMENT_HPP

/****************************************************************************************************/
