

/**
 * \file FabriquePorte.hpp
 * \brief declaration classe FabriquePorte
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#ifndef FABRIQUEPORTE_HPP
#define FABRIQUEPORTE_HPP


#include "../FabriqueCarte.hpp"
#include "../../../Carte/Porte/Monstre/Monstre.hpp"
#include "../../../Carte/Porte/Race/Race.hpp"
#include "../../../Carte/Porte/Malediction/Malediction.hpp"
#include "../../FabriqueComportement/FabriqueComportement.hpp"


#include <string>



/****************************************************************************************************/

class FabriquePorte:public FabriqueCarte{
  private:
    int monstre;
    int malediction;
    int race;
  protected:


  public:
    /*!
    *  \brief Constructeur
    *
    *  Constructeur de la classe Fabrique
    */
    FabriquePorte();
    
    /*!
    *  \brief Destructeur
    *
    *  Destructeur de la classe FabriqueCarte
    */
    ~FabriquePorte();
    Carte * fabriquer(vector<string> champs);
};

#endif
