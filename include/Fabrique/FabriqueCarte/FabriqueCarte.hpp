/**
 * \file FabriqueCarte.hpp
 * \brief declaration classe FabriqueCarte
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#ifndef FABRIQUECARTE_HPP
#define FABRIQUECARTE_HPP



#include <string>
#include <iostream>
#include <vector>
#include "../Fabrique.hpp"


class Carte;
class FabriqueComportement;


/****************************************************************************************************/

class FabriqueCarte:public Fabrique {
  protected:
   FabriqueComportement * comportement;
  public:
    /*!
    *  \brief Constructeur
    *
    *  Constructeur de la classe FabriqueCarte
    */
    FabriqueCarte();
    
    /*!
    *  \brief Destructeur
    *
    *  Destructeur de la classe FabriqueCarte
    */
    virtual ~FabriqueCarte();
    
    /*!
    *  \brief Découpe la ligne.
    *
    *  Methode qui découpe une chaine en liste de chaine.
    *
    *  \param info une chaine de caractere.
    *  \return une liste de chaine de caractere.
    */
    std::vector<std::string> decompString(std::string info);
    
    virtual Carte * fabriquer(std::vector<std::string> champs) =0;
};

#endif
