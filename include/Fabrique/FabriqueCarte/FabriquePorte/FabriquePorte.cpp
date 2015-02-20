#include "FabriquePorte.hpp"

FabriquePorte::FabriquePorte():FabriqueCarte(){
  comportement=new FabriqueComportement();
  monstre = 0;
  malediction = 0;
  race = 0;
}

FabriquePorte::~FabriquePorte(){
  delete comportement;
}

Carte * FabriquePorte::fabriquer(std::vector<std::string> champs){
  Carte * res= NULL;
  int i=3;
  if(champs.front()=="Monstre"){
	++monstre;
	i+=2;
	if(champs.size()>6 && champs[5]=="2") {
	  res = new Monstre(1100+monstre,champs[1],champs[2],std::stoi(champs[3]),std::stoi(champs[4]),std::stoi(champs[5]));
	  ++i;
	}
    else res = new Monstre(1100+monstre,champs[1],champs[2],std::stoi(champs[3]),std::stoi(champs[4]));
  }
  else if(champs.front()=="Malediction"){
    ++malediction;
    res = new Malediction(1200+malediction, champs[1],champs[2]);
  }
  else if(champs.front()=="Race"){
	++race;
	res = new Race(1300+race,champs[1],champs[2]);
  }
  
  if(res != NULL && champs.size()>i) return comportement->fabriquer(comportement->decompString(champs[i]), res);
  else return res;
}
