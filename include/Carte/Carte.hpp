/**
 * \file Carte.hpp
 * \brief déclaration classe Carte
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#ifndef CARTE_HPP
#define CARTE_HPP

/****************************************************************************************************/

#include <string>
class Personnage;


/****************************************************************************************************/

class Carte {
  public:
  
  /**
  *\fn	Carte(int id, std::string n, std::string d)
  *\brief Constructeur de carte
  *\param id Identifiant de la carte
  *\param n nom de la carte
  *\param d description de la carte
  */
    Carte(int id, std::string n, std::string d);//Constructeur par défaut

    
	/**
	*\fn	virtual ~Carte();
	*\brief  Destructeur de carte
	*/
    virtual ~Carte();

    //Accesseurs
	
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
	*\fn	virtual bool estTresor()
	*\brief	Renvoie vrai si c'est une Tresor
	*\return	vrai si c'est un trésor, Faux sinon
	*/
	virtual bool estTresor();
	
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
	
	/**
	*\fn int getId();
	*\brief	renvoie l'identifiant
	*\return	la valeur de l'identifiant
	*/
	int getId();


    //Mutateurs
    //void Setnom(string val);
    //void Setdescription(string val);

	/**
	*\fn  bool compare(Carte * e);
	*\brief	Permet de comparer 2 cartes
	*\param Carte à comparer avec this
	*\return	Vrai si elles ont le même nom, faux sinon
	*/
    bool compare(Carte * e);
	

  protected:
    //Attributs
    int identifiant;/*!<identifient de la carte*/
    std::string nom;/*!<nom de la carte*/
    std::string description;/*!<description de la carte*/

  private:

}; //Class Carte

/****************************************************************************************************/

#endif //CARTE_HPP

/****************************************************************************************************/
