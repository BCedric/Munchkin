#ifndef FABRIQUE_HPP
#define FABRIQUE_HPP

/****************************************************************************************************/

/**
 * \file Fabrique.hpp
 * \brief declaration classe Fabrique
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */
 
/****************************************************************************************************/

#include <string>
#include <vector>

/****************************************************************************************************/

/*! \class 
* \brief classe representant la Fabrique
*
*  La classe gere la lecture d'une liste de morceaux
*/
class Fabrique{
  public:
    /*!
    *  \brief Constructeur
    *
    *  Constructeur de la classe Fabrique
    */
    Fabrique();
    
    /*!
    *  \brief Destructeur
    *
    *  Destructeur de la classe CPlayer
    */
    virtual ~Fabrique();
    
    /*!
    *  \brief Découpe la ligne.
    *
    *  Methode qui découpe une chaine en liste de chaine.
    *
    *  \param info une chaine de caractere.
    *  \return une liste de chaine de caractere.
    */
    virtual std::vector<std::string> decompString(std::string info) =0;
};

#endif
