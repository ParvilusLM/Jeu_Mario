#pragma once
#include "enums.h"

extern int LARGEUR_FEN;
extern int HAUTEUR_FEN;

struct Joueur{
	int vie;
	int sante;
	Type_perso typePerso;
	Etat_perso etatPerso;
	Action_perso actionPerso;


};

struct Ennemi{
	int vie;
	
};

