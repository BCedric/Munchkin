#include "FabriqueTresor.hpp"


FabriqueTresor::FabriqueTresor():FabriqueCarte(){
  comportement=new FabriqueComportement();
  potion = 0;
  equipement = 0;
  armure = 0;
  main = 0;
  chaussure = 0;
  couvrechef = 0;
}

FabriqueTresor::~FabriqueTresor(){
	delete comportement;
}

Carte * FabriqueTresor::fabriquer(std::vector<std::string> champs){
  Carte * res= NULL;
  int i = 4;
  if(champs.front()=="Potion") res = new Potion(2100+potion,champs[1],champs[2],std::stoi(champs[3]));
  else if(champs.front()=="Equipement") res = new Equipement(2200+equipement,champs[1],champs[2],std::stoi(champs[3]));
  else if(champs.front()=="Armure") res = new Armure(2300+armure,champs[1],champs[2],std::stoi(champs[3]));
  else if(champs.front()=="Main"){
    if(champs.size()>5 && champs[4]=="2") {
	  res = new Main(2400+main,champs[1],champs[2],stoi(champs[3]),stoi(champs[4]));
	  ++i;
	}
    else res = new Main(2400+main,champs[1],champs[2],stoi(champs[3]));
  }
  else if(champs.front()=="Chaussure") res = new Chaussure(2500+chaussure,champs[1],champs[2],stoi(champs[3]));
  else if(champs.front()=="CouvreChef") res = new CouvreChef(2600+couvrechef,champs[1],champs[2],stoi(champs[3]));
  
  if(res != NULL && champs.size()>i) return comportement->fabriquer(comportement->decompString(champs[i]), res);
  else return res;
}
