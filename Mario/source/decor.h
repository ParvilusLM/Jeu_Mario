#pragma once
#include "menu.h"
#include "carte.h"
#include "personnage.h"
#include "monstre.h"
#include "son.h"

class Decor {

public:
    Decor();
    ~Decor();

    
    /***  Les methodes ***/
    Menu& getMenu();
    Carte& getCarte();
    Personnage& getPersonnage();
    Monstre& getMonstre();
    Son& getSon();






private:
    sf::RenderWindow* m_fenetre;
    Menu* m_menu;
    Carte* m_carte;
    Personnage* m_personnage;
    Monstre* m_monstre;
    Son* m_son;


};