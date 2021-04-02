#pragma once
#include "varG.h"
#include <iostream>

class Menu {

public:
    Menu(sf::RenderWindow& fenetre);
	~Menu();

    //initialisation des menus
    void initMenu();
    void miseAEchelleMenu(); //pour gerer les differentes tailles d'ecrans
    
    //pour les menus
    Type_menu getTypeMenu();
    void setTypeMenu(int menuChoisit);
    void afficheMenu();

    //pour les boutons des menus
    void gestionBoutons();
    void actionBoutons(int bouton);
    void affficheBoutons();
    bool collisionsBS(); // BS=Boutons-Souris


    void gestionTexture();

    




private:
    sf::RenderWindow* m_fenetre;

    /*
        *textures et fonts pour les menus 
    */
    sf::Font m_fontBouton;

    sf::Texture m_tMPrincipal,e_tMInstructions,m_tMOptions,m_tMSelectNiveau,m_tMCredits,m_tMPause,
        m_tMScores,m_tMJeuEnCours,m_tMFinPartie;

    sf::Texture m_tBMPrincipal,e_tBMInstructions,m_tBMOptions,m_tBMSelectNiveau,m_tBMCredits,m_tBMPause,
        m_tBMScores,m_tBMJeuEnCours,m_tBMFinPartie;    


    //...
    //..
    //Menu
    StructMenu m_menu;

};
