#pragma once


//pour le personnage
enum Type_perso {
	e_Robot,
	e_Chevalier
};

enum Etat_perso {
	e_Vivant,
	e_Mort
};

enum Action_perso {
	e_Attack,
	e_Idle,
	e_Jump,
	e_JumpMelee,
	e_JumpShoot,
	e_JumpAttack,
	e_Melee,
	e_Run,
	e_RunShoot,
	e_Shoot,
	e_Slide,
	e_Dead,
	e_Walk,

};


//pour les ennemis
enum Type_monstre{

};

enum Etat_monstre{

};

enum Action_monstre{

};

// pour l'animation
enum Type_anim {
	
};

enum Etat_anim {

};


//pour le menu
enum Type_menu {
	e_menuPrincipal,
	e_menuInstructions,
	e_menuOptions,
	e_menuSelectNiveau,
	e_menuCredits,
	e_menuPause,
	e_menuScores,
	e_menuJeuEnCours,
	e_menuFinPartie
};

enum Element_actif {

};

enum Difficulte_niveau {

};


//pour les boutons
enum Nom_bouton {
	e_bNouvellePartie,
	e_bInstructions,
	

};

enum Etat_bouton {
	e_normal,
	e_hover,
	e_clicked,
	e_locked
};

enum Action_bouton {
	e_aucune
};


//pour les sons
enum Type_son {

};

enum Etat_son {

};


//pour la plateforme


