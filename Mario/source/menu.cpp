#include "menu.h"


Menu::Menu(sf::RenderWindow& fenetre){
    m_fenetre = &fenetre;

    m_tBoutons.loadFromFile("donnees/images/ui/Button.png");
    m_tCadres.loadFromFile("donnees/images/ui/Windows.png");
    m_font.loadFromFile("donnees/images/ui/Creepy.ttf");



}
	

//initialisation des menus
void Menu::initMenu(){

    m_menu.m_typeMenu=e_menuPrincipal;
    m_menu.m_elementActif=e_aucun_actif;
    int nomBouton=0;

    //Menu principal
    for (int i = 0; i < 6; i++)
    {
        BoutonSimple nouvBouton;
        nouvBouton.action=e_aucune;
        nouvBouton.etat=e_normal;
        nouvBouton.etatAnimation=e_enPause; 
        nouvBouton.nom=nomBouton;
        nomBouton++;

        m_menu.m_vecBMPrincipal.
    }
    
    //Menu instructions
    for (int i = 0; i < 3; i++)
    {
        
    }

    //Menu options
    for (int i = 0; i < 7; i++)
    {
        
    }

    //Menu selectNiveau
    for (int i = 0; i < 2; i++)
    {
        
    }

    //Menu pause
    for (int i = 0; i < 4; i++)
    {
        
    }

    //Menu Credits
    for (int i = 0; i < 1; i++)
    {
        
    }

    //Menu Scores
    for (int i = 0; i < 1; i++)
    {
        
    }

    //Menu JeuEnCours
    for (int i = 0; i < 1; i++)
    {
        
    }

    //Menu FinPartie
    for (int i = 0; i < 3; i++)
    {
        
    }

}

void Menu::miseAEchelleMenu(){

}


//pour les menus
Type_menu Menu::getTypeMenu(){

}

void Menu::setTypeMenu(int menuChoisit){

}

void Menu::afficheMenu(){

}


//pour les boutons des menus
void Menu::gestionBoutons(){

}

void Menu::actionBoutons(int bouton){

}

void Menu::affficheBoutons(){

}

bool Menu::collisionsBS(){

}


void Menu::gestionTexture();

Menu::~Menu(){

}