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
	e_enCours,
	e_enPause
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
	e_aucun_actif
};


enum Difficulte_niveau {

};


//pour les boutons
enum Nom_bouton {
	e_bNouvellePartie,
	e_bInstructions,
	e_bOptions,
    e_bScores,
    e_bCredits,
    e_bQuitter,
    e_bPrec,
    e_bSuiv,
    e_bOk_MP,
    e_bMoins1,
    e_bMoins2,
    e_bMoins3,
    e_bPlus1,
    e_bPlus2,
    e_bPlus2,
    e_bOk_Options,
    e_bRetourMenu_SelNiv,
    e_bJouer,
    e_bOk_Credits,
    e_bResume,
    e_bRejouer,
    e_bOptions_Pause,
    e_bQuitter_Pause,
    e_bOk_Scores,
    e_bPause,
    e_bRetourMenu_FinPartie,
    e_bRejouer_FinPartie,
    e_bContinuer
};

enum Etat_bouton {
	e_normal,
	e_hover,
	e_clicked,
	e_locked
};

enum Action_bouton {
	e_aucune_action
};


//pour les sons
enum Type_son {

};

enum Etat_son {

};


//pour la plateforme


