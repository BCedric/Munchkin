#include "FabriqueCarte.hpp"

FabriqueCarte::FabriqueCarte():Fabrique() {	
}

FabriqueCarte::~FabriqueCarte(){
  
}

std::vector<std::string> FabriqueCarte::decompString(std::string info){
  int i=0;
  std::string champ="";
  std::vector<std::string> res;
  while(info[i]!='\0'){
    if(info[i]==';'){
      res.push_back(champ);
      champ="";
    }
    else champ+=info[i];
      ++i;
  }
  return res;
}
