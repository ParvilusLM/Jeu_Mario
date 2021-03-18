#pragma once
#include "enums.h"
#include <SFML/Graphics.hpp>

extern int LARGEUR_FEN;
extern int HAUTEUR_FEN;

struct Joueur{
	int vie;
	int sante;
	int orientation;
	Type_perso typePerso;
	Etat_perso etatPerso;
	Action_perso actionPerso;

};

struct Ennemi{
	int sante;
	int orientation;
	Type_ennemi typeEnnemi;
	Etat_ennemi etatEnnemi;
	Action_ennemi actionEnnemi;


};

struct BoutonSimpleText {
	sf::Text m_bouton;
	sf::Font m_font;

};

