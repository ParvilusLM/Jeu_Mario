#include "menu.h"


Menu::Menu(sf::RenderWindow& fenetre){
    m_fenetre = &fenetre;

    m_tBoutons.loadFromFile("donnees/images/ui/Button.png");
    m_tCadres.loadFromFile("donnees/images/ui/Windows.png");
    m_font.loadFromFile("donnees/images/ui/Creepy.ttf");



}
	

//initialisation des menus
void Menu::initMenu(){

    //Menu principal

    //Menu instructions

    //Menu 
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