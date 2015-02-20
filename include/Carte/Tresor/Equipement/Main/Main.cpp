#include "Main.hpp"


Main::Main(int id, std::string n, std::string d, int p) : Equipement(id, n,d,p),nbMain(1) {}
Main::Main(int id, std::string n, std::string d, int p, int nb) : Equipement(id, n,d,p),nbMain(nb) {}


int Main::getNbMain(){
  return nbMain;
}

bool Main::estMain() {
  return true;
}

