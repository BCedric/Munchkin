#include "FabriqueComportement.hpp"

FabriqueComportement::FabriqueComportement(){}
FabriqueComportement::~FabriqueComportement(){}

Carte * FabriqueComportement::fabriquer(std::vector<std::string> champs, Carte * c){
  Carte * res = c;
  std::string comp;
  int valeur =0;
  
  for(int i=0;i<champs.size();++i){
	comp = champs[i];
	++i;
	valeur = std::stoi(champs[i]);
	if(comp=="PerteGainNiv") res=new PerteGainNiv(res, valeur);
	else if(comp=="PerteObjMax") res=new PerteObjMax(res,valeur);
	else if(comp=="CarteSupMain") res=new CarteSupMain(res, valeur);
	else if(comp=="MalusBonus") res=new MalusBonus(res, valeur);
	else if(comp=="MalusBonusDeguerpir") res=new MalusBonusDeguerpir(res, valeur);
  }
  return res;
}

std::vector<std::string> FabriqueComportement::decompString(std::string info) {
  int i=1;
  string champ="";
  vector<string> res;
  if(info != "" && info[0]=='('){
    while(info[i]!=')'){
      if(info[i]==','){
        res.push_back(champ);
        champ="";
      }
      else champ+=info[i];
      ++i;
    }
    res.push_back(champ);
  }
  return res;
}
