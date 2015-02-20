#include "CouvreChef.hpp"

CouvreChef::CouvreChef(int id, std::string n, std::string d, int p) : Equipement(id, n,d,p) {}

bool CouvreChef::estCouvreChef() {
  return true;
}
