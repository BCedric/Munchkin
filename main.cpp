/**
 * \file main.cpp
 * \brief programme de tests
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


#include <iostream>
#include <string>
#include "include/Munchkin/Munchkin.hpp"
#include "include/Personnage/Joueur/Joueur.hpp"
#include "include/Carte/Carte.hpp"
#include <vector>
#include <typeinfo>







Carte * choisirCarte(Joueur * j ,vector<Carte *>& v);
Joueur * choisirJoueur(Munchkin * m);

int main(int argc, char *argv[]) {
	if(argc==2 && stoi(argv[1])>0 && stoi(argv[1])<6){
	  int choix;
	  Munchkin * m = new Munchkin("Cartes.txt", stoi(argv[1]));
	  Joueur * j=m->getCourant();
	  vector<Carte*>::iterator i;
	  Carte * c;
	  vector<Joueur *>::iterator ite;
	  j->afficher();
	  
	  while(!m->getFinPartie()){
		j=m->getCourant();
		
		cout<<"Actions :"<<endl;
		cout<<"1 : Piocher une porte face visible" <<endl;
		cout<<"2 : Piocher une porte face cachée"<<endl;
		cout<<"3 : Changer de Race"<<endl;
		cout<<"4 : Poser un equipement"<<endl;
		cout<<"5 : Equiper un equipement du bagage"<<endl;
		cout<<"6 : Combattre un monstre de votre main"<<endl;
		cout<<"7 : Maudire un autre joueur avec une malediction de votre main"<<endl;
		cout<<"8 : Poser une potion"<<endl;
		cout<<"9 : Deguerpir"<<endl;
		cout<<"10 : Défausser une carte"<<endl;
		cout<<"11 : finir votre tour"<<endl;
		
		cin>>choix;
		
		std::system("clear");
		j->afficher();
		
		switch(choix){
			case 1:{
				j->getEtat()->piocherPorteFaceVisible();
				break;
			}
			case 2:{
				j->getEtat()->piocherPorteFaceCache();
				break;
			}
			case 3:{
				c=choisirCarte(j, j->getMain());
				if(c!=NULL && c->estRace()){
					j->getEtat()->changerRace((Race*)c);
				}
				else{
					cout<<"Vous n'avez pas choisi une Race"<<endl;
					j->getMain().push_back(c);
				}
				break;
			}
			case 4:{
				c=choisirCarte(j, j->getMain());
				if(c!=NULL && c->estEquipement()){
					j->getEtat()->poseEquipement(c);
				}
				else{
					cout<<"Vous n'avez pas choisi un equipement"<<endl;
					j->getMain().push_back(c);
				}
				break;
			}
			case 5:{
				c=choisirCarte(j,j->getBagage());
				if(c!=NULL){
					cout<<c->getNom()<<endl;
					j->getEtat()->equiper(c);
				}
				
				break;
			}
			case 6:{
				c=choisirCarte(j,j->getMain());
				if(c!=NULL && c->estMonstre()){
					
					j->getEtat()->combattre((Monstre*)c);
				}
				else{
					cout<<"Vous n'avez pas choisi un monstre"<<endl;
					j->getMain().push_back(c);
				}
				break;
			}
			case 7:{
				c=choisirCarte(j,j->getMain());
				if(c!=NULL && c->estMalediction()){
					j->getEtat()->poserMalediction(choisirJoueur(m),(Malediction*)c);
				}
				else{
					cout<<"Vous n'avez pas choisi une malediction"<<endl;
					j->getMain().push_back(c);
				}
				
				break;
			}
			case 8:{
				c=choisirCarte(j,j->getMain());
				if(c!=NULL && c->estPotion()){
					j->getEtat()->poserPotion(j,(Potion*)c);
				}
				else{
					cout<<"Vous n'avez pas choisi une potion"<<endl;
					j->getMain().push_back(c);
				}
				
				break;
			}
			case 9:{
				
				j->getEtat()->deguerpir();
				break;
			}
			case 10:{
				c=choisirCarte(j,j->getMain());
				if(c!=NULL) j->getEtat()->defausserCarte(c);
				else cout<<"Vous n'avez pas de carte en main"<<endl;
				break;
			}
			
			case 11:{
				j->getEtat()->finirTour();
				break;
			}
			
			default:
				break;
		
			//void vendreObjets(vector<Tresor> * sacAvendre);
			
		}
		if(j->getNiveau()==10){
			cout<<"Le joueur "<<j->getId()<<" gagne la partie."<<endl;
		}
		
	}
	
	
	  
	  
	  
	 
		
	  delete m;
	
	}
	else cout<<"Vous n'avez pas choisi un nombre de joueur entre 1 et 5"<<endl;
	
	return 0;
}


Carte * choisirCarte(Joueur * j ,vector<Carte *>& v){
	Carte * res;
	vector<Carte *>::iterator i;
	unsigned int choix, n=0;
	if(v.size()>0){
		for(i=v.begin();i!=v.end();++i){
			cout<<n<<" : "<<(*i)->getNom()<<endl;
			++n;
		}
		cin>>choix;
		while(choix<0 || choix>=v.size()){
			cout<<"La carte n'existe pas, choisissez en une autre"<<endl;
			cin>>choix;
		}
		
		i=v.begin();
		for(n=0;n<choix;++n){
			++i;
		}
		res=*i;
		v.erase(i);
		return res;
	}
	else{
		cout<<"Vous n'avez pas de carte ici"<<endl;
		return NULL;
	}
}

Joueur * choisirJoueur(Munchkin * m){
	vector<Joueur *>::iterator i;
	Joueur * res;
	unsigned int choix, n=0;
	cout<<m->getJoueurs().size()<<endl;
		for(i=m->getJoueurs().begin();i!=m->getJoueurs().end();++i){
			cout<<n<<" Joueur : "<<(*i)->getId()<<endl;
			++n;
		}
		cin>>choix;
		while(choix<0 || choix>=m->getJoueurs().size()){
			cout<<"Le joueur n'existe pas, choisissez en un autre";
			cin>>choix;
		}
		
		i=m->getJoueurs().begin();
		for(n=0;n<choix;++n){
			++i;
		}
		res=*i;
		return res;	
}
