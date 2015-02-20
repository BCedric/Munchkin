#include "Armure.hpp"

Armure::Armure(int id, std::string n, std::string d, int p) : Equipement(id, n, d, p) {}


bool Armure::estArmure() {
  return true;
}
