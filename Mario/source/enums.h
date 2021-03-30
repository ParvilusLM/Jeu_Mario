#pragma once


//pour le personnage
enum Type_perso {
	Robot,
	Chevalier
};

enum Etat_perso {
	Vivant,
	Mort
};

enum Action_perso {
	Attack,
	Idle,
	Jump,
	JumpMelee,
	JumpShoot,
	JumpAttack,
	Melee,
	Run,
	RunShoot,
	Shoot,
	Slide,
	Dead,
	Walk,

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
	menuPrincipal,
	menuInstructions,
	menuOptions,
	menuSelectNiveau,
	menuCredits,
	menuPause,
	menuScores,
	menuJeuEnCours
};

enum Menu_actif {
	mPrincipal_actif,
	mInstructions_actif,
	mOptions_actif,
	mSelectNiveau_actif,
	mCredits_actif,
	mScores_actif,
	mPause_actif,
	mJeuEnCours_actif
};

enum Element_actif {

};

enum Difficulte_niveau {

};


//pour les boutons
enum Etat_bouton {
	
};

enum Nom_bouton {

};

enum Action_bouton {

};


//pour les sons
enum Type_son {

};

enum Etat_son {

};


//pour la plateforme


