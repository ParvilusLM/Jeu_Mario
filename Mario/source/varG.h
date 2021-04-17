#pragma once
#include "enums.h"

#include <SFML/Graphics.hpp>
#include <iostream>

extern int LARGEUR_FEN;
extern int HAUTEUR_FEN;

/*
	*instance representant le personnage
	*
*/

struct Joueur{
	int vie;
	int sante;
	int orientation;
	Type_perso typePerso;
	Etat_perso etatPerso;
	Action_perso actionPerso;
};


/*
	*instance representant les monstres
	*
*/
struct Monstre{
	int sante;
	int orientation;
	Type_monstre typeMonstre;
	Etat_monstre etatMonstre;
	Action_monstre actionMonstre;
};


struct GenerateurMonstre{
	sf::Vector2f position;
	std::vector<Monstre > vecMonstre;
	int actif;
};


/*
 	*Ensemble des structures pour le menu
	* BoutonSimple, StructMenu,
*/

struct BoutonSimple {
	Nom_bouton nom;
	Etat_bouton etat;
	Action_bouton action;
	sf::Sprite sImage;
	sf::Text textBouton;
	Etat_anim etatAnimation;
};

struct StructMenu
{
	/***  Elements des differents menus   ***/

    Type_menu m_typeMenu;
    Element_actif m_elementActif;

    //Pour le menu principal
    std::vector<BoutonSimple > m_vecBMPrincipal;

    //pour le menu instructions
    std::vector<BoutonSimple > m_vecBInstructions;


    //pour le menu options
    std::vector<BoutonSimple > m_vecBOptions;

	//pour le menu selectionNiveau
	std::vector<BoutonSimple > m_vecBSelectNiveau;


	//pour le menu credits
	std::vector<BoutonSimple > m_vecBCredits;

	//pour le menu scores
	std::vector<BoutonSimple > m_vecBScores;


    //pour le menu pause
    std::vector<BoutonSimple > m_vecBPause;


    //pour le menu jeu en cours
    std::vector<BoutonSimple > m_vecBJeuEnCours;
};




/*
 	*pour la carte
	*
*/


/*
 	*pour la camera
	*
*/

