#include "Chaussure.hpp"


Chaussure::Chaussure(int id, std::string n, std::string d, int p) : Equipement(id, n,d,p) {}

bool Chaussure::estChaussure() {
  return true;
}
