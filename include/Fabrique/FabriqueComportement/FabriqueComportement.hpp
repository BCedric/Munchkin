#ifndef FABRIQUECOMPORTEMENT_HPP
#define FABRIQUECOMPORTEMENT_HPP

/****************************************************************************************************/

/**
 * \file FabriqueComportement.hpp
 * \brief declaration classe FabriqueComportement
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */

/****************************************************************************************************/

#include <string>
#include <vector>
#include "../Fabrique.hpp"
#include "../../Carte/Comportement/PerteGainNiv/PerteGainNiv.hpp"
#include "../../Carte/Comportement/PerteObjMax/PerteObjMax.hpp"
#include "../../Carte/Comportement/CarteSupMain/CarteSupMain.hpp"
#include "../../Carte/Comportement/MalusBonus/MalusBonus.hpp"
#include "../../Carte/Comportement/MalusBonusDeguerpir/MalusBonusDeguerpir.hpp"

/****************************************************************************************************/

/*! \class
* \brief classe representant la FabriqueCarte
*
*  La classe gere la décoration des cartes
*/
class FabriqueComportement:public Fabrique {
  public:
    /*!
    *  \brief Constructeur
    *
    *  Constructeur de la classe FabriqueComportement
    */
    FabriqueComportement();
    
    /*!
    *  \brief Destructeur
    *
    *  Destructeur de la classe FabriqueComportement
    */
    virtual ~FabriqueComportement();
 
    /*!
    *  \brief fabrique une Carte.
    *
    *  Methode qui retourne la Carte décoré avec les informations de la 
    *  liste données en parametres.
    *
    *  \param champs : liste de chaine de caractere contenant les informations.
    *  \param c : Carte a décorer.
    *  \return une Carte avec un comportement.
    */
    Carte * fabriquer(std::vector<std::string> champs, Carte * c);
    
    /*!
    *  \brief Découpe la ligne.
    *
    *  Methode qui découpe une chaine en liste de chaine.
    *
    *  \param info une chaine de caractere.
    *  \return une liste de chaine de caractere.
    */
	std::vector<std::string> decompString(std::string info);
};

#endif
