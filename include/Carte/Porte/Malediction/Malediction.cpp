/**
 * \file Malediction.cpp
 * \brief implementation classe Malediction
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


# include "Malediction.hpp"

Malediction::Malediction(int id, std::string nom, std::string description):Porte(id, nom, description){}

bool Malediction::estMalediction(){
  return true;
}
