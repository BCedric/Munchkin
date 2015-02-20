#ifndef MUNCHKIN_HPP
#define MUNCHKIN_HPP

/****************************************************************************************************/

/**
 * \file Munchkin.hpp
 * \brief declaration classe Munchkin
 * \author Bois Cédric Le Corvec Quentin
 * \date Octobre 2014
 */


/****************************************************************************************************/

#include <algorithm>
#include "../Personnage/Joueur/Joueur.hpp"
#include "../Fabrique/FabriqueCarte/FabriquePorte/FabriquePorte.hpp"
#include "../Fabrique/FabriqueCarte/FabriqueTresor/FabriqueTresor.hpp"
#include <vector>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string.h>

class Porte;
class Tresor;
class Carte;



/****************************************************************************************************/

class Munchkin {

  public:
    /*!
    *  \brief Constructeur.
    *
    *  Constructeur de la classe Munchkin.
    *
    *  \param filename : Chemin d'Accès au documents contenant les cartes.
    *  \param nbJoueurs : Nombre de joueurs dans la partie.
    */
    Munchkin(std::string filename, int nbJoueurs);

    /*!
    *  \brief Destructeur.
    *
    *  Destructeur de la classe Munchkin.
    */
    ~Munchkin();
    
    /*!
    *  \brief Retourne la pioche Portes
    *
    *  Retourne la liste des cartes portes de la pioche Portes
    *
    *  \return une liste de Carte
    */
	std::vector<Carte*>& getPortes();
    
    /*!
    *  \brief Retourne la defausse
    *
    *  Retourne la liste des cartes de la defausse
    *
    *  \return une liste de Carte
    */
	std::vector<Carte*>& getDefausse();
	    
    /*!
    *  \brief Retourne la pioche Tresors
    *
    *  Retourne la liste des cartes de la pioche Tresors
    *
    *  \return une liste de Carte
    */
	std::vector<Carte*>& getTresors();
	    
    /*!
    *  \brief Retourne la liste des joueurs 
    *
    *  Methode qui retourne les joueurs du munchkin
    *
    *  \return une liste de Joueur
    */
	std::vector<Joueur*>& getJoueurs();
	    
    /*!
    *  \brief Retourne le joueur en cours d'action
    *
    *  Methode qui retoune le joueur qui est acctuelement en
    *  train d'effectuer son tour
    *
    *  \return un Joueur
    */
	Joueur * getCourant();
    
    /*!
    *  \brief Retourne le booléen finPartie.
    *
    *  Methode qui permet de savoir si le jeu est fini ou toujours en cours.
    *
    *  \return Retourne un booléen.
    */
	bool getFinPartie();
	    
    /*!
    *  \brief Change la valeur de finPartie.
    *
    *  Permet de changer la valeur de finPartie remplacé par celle en
    *  parametre.
    *
    *  \param b : booléen.
    */
	void setFinPartie(bool b);
	
    /*!
    *  \brief Permet de changer la valeur de courant.
    *
    *  Methode qui de modifier le Joueur dont il c'est actuelement le
    *  tour 
    *
    *  \param j : Nouveau joueur en cour d'action.
    */
	void changementJoueur(Joueur * j);
	    
    /*!
    *  \brief Importe les cartes d'un fichier texte.
    *
    *  Methode appel les fabrique de carte pour ajouter des cartes
    *  au jeu depuis un fichier texte.
    *
    *  \param filename : Chemin d'Accès au documents contenant les cartes.
    */
    void importerCartes(std::string filename);
    
    /*!
    *  \brief Pioche une porte.
    *
    *  Methode qui retourne une carte de la liste de carte Porte.
    *
    *  \return Une Carte de la liste Portes.
    */
	Carte * piocherPorte();
	    
    /*!
    *  \brief Pioche un tresor.
    *
    *  Methode qui retourne une carte de la liste de carte Tresor.
    *
    *  \return Une Carte de la liste Tresors.
    */
	Carte * piocherTresor();
	    
    /*!
    *  \brief Defausse une carte.
    *
    *  Méthode qui ajoute la carte passé en parametre a la liste
    *  defausse.
    *
    *  \param c : Carte a ajouter a la défausse.
    */
	void defausser(Carte * c);

  private:
    //Attributs
	std::vector<Carte*> Portes;			/*!< Liste des cartes du type Porte (non défausser)*/
	std::vector<Carte*> Tresors;		/*!< Liste des cartes du type Tresor (non défausser)*/
	std::vector<Carte*> defausse;		/*!< Liste des cartes defausser du jeu*/
	FabriqueCarte * fabriquePortes;		/*!< Fabrique des cartes du type Porte*/
    FabriqueCarte * fabriqueTresors;	/*!< Fabrique des cartes du type Tresor*/

	std::vector<Joueur*> joueurs;		/*!< Liste des joueurs*/
	Joueur * courant;					/*!< Joueur actuellement en cour d'action */
	bool finPartie;						/*!< booléen mis a vrai quand le jeu est terminé*/





}; //Class Munchkin

/****************************************************************************************************/

#endif //MUNCHKIN_HPP

/****************************************************************************************************/
