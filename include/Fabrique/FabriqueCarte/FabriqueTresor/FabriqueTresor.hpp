

/**
 * \file FabriqueTresor.hpp
 * \brief declaration classe FabriqueTresor
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#ifndef FABRIQUETRESOR_HPP
#define FABRIQUETRESOR_HPP


#include "../FabriqueCarte.hpp"
#include "../../../Carte/Tresor/Potion/Potion.hpp"
#include "../../../Carte/Tresor/Equipement/Armure/Armure.hpp"
#include "../../../Carte/Tresor/Equipement/Main/Main.hpp"
#include "../../../Carte/Tresor/Equipement/Chaussure/Chaussure.hpp"
#include "../../../Carte/Tresor/Equipement/CouvreChef/CouvreChef.hpp"
#include "../../FabriqueComportement/FabriqueComportement.hpp"
#include <string>


/****************************************************************************************************/

class FabriqueTresor:public FabriqueCarte{
  private:
    int potion;			
    int equipement;
    int armure;
    int main;
    int chaussure;
    int couvrechef;

  public:
    /*!
    *  \brief Constructeur
    *
    *  Constructeur de la classe FabriqueTresor
    */
    FabriqueTresor();
    
    /*!
    *  \brief Destructeur
    *
    *  Destructeur de la classe FabriqueTresor
    */
    ~FabriqueTresor();
    Carte * fabriquer(std::vector<std::string> champs);
};

#endif
