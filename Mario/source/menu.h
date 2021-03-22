#pragma once
#include "varG.h"

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

    //textures et fonts pour les menus
    sf::Texture m_tBoutons,m_tCadres;
    sf::Font m_fontBouton;

    //...
    //..
    //Menu
    StructMenu m_menu;

};
