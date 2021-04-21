#include "menu.h"


Menu::Menu(sf::RenderWindow& fenetre){
    m_fenetre = &fenetre;

    m_font.loadFromFile("donnees/images/ui/Creepy.ttf");

    //chargement des textures
    // m_tM == membre_textureMenu...
    m_tMInstructions.loadFromFile("donnees/images/ui/instuctions.png");
    m_tMOptions.loadFromFile("donnees/images/ui/options.png");
    m_tMSelectNiveau.loadFromFile("donnees/images/ui/selectNiveau.png");
    m_tMPause.loadFromFile("donnees/images/ui/pause.png");
    m_tMCredits.loadFromFile("donnees/images/ui/credits");
    m_tMScores.loadFromFile("donnees/images/ui/scores.png");
    m_tMFinPartie.loadFromFile("donnees/images/ui/finPartie.png");

    // m_tBM == membre_textureBoutonMenu...
    m_tBMPrincipal.loadFromFile("donnees/images/ui/bPrincipal.png");
    m_tBMInstructions.loadFromFile("donnees/images/ui/bInstructions.png");
    m_tBMOptions.loadFromFile("donnees/images/ui/bOptions.png");
    m_tBMSelectNiveau.loadFromFile("donnees/images/ui/bSelectNiveau.png");
    m_tBMPause.loadFromFile("donnees/images/ui/bPause.png");
    m_tBMCredits.loadFromFile("donnees/images/ui/bCredits.png");
    m_tBMScores.loadFromFile("donnees/images/ui/bScores.png");
    m_tBMJeuEnCours.loadFromFile("donnees/images/ui/bJeuEnCours.png");
    m_tBMFinPartie.loadFromFile("donnees/images/ui/bFinPartie.png");




}


//initialisation des menus
void Menu::initMenu(){

    m_menu.m_typeMenu=e_menuPrincipal;
    m_menu.m_elementActif=e_aucun_actif;
    int nomBouton=0;

    //creation des boutons
    for (int i = 0; i < 28; i++)
    {
        BoutonSimple nouvBouton;
        nouvBouton.action=e_aucune;
        nouvBouton.etat=e_normal;
        nouvBouton.etatAnimation=e_enPause;
        nouvBouton.nom=nomBouton;
        nomBouton++;

        switch (i)
        {
        case i<6:
            nouvBouton.sImage.setTexture(m_tBMPrincipal);
            m_menu.m_vecBMPrincipal.insert(m_menu.m_vecBMPrincipal.end(),nouvBouton);
            break;

        case i>5 && i<9:
            nouvBouton.sImage.setTexture(m_tBMInstructions);
            m_menu.m_vecBMInstructions.insert(m_menu.m_vecBMInstructions.end(),nouvBouton);
            break;

        case i>8 && i<16:
            nouvBouton.sImage.setTexture(m_tBMOptions);
            m_menu.m_vecBMOptions.insert(m_menu.m_vecBMOptions.end(),nouvBouton);
            break;

        case i>15 && i<18:
            nouvBouton.sImage.setTexture(m_tBMSelectNiveau);
            m_menu.m_vecBMSelectNiveau.insert(m_menu.m_vecBMSelectNiveau.end(),nouvBouton);
            break;

        case i>17 && i<22:
            nouvBouton.sImage.setTexture(m_tBMPause);
            m_menu.m_vecBMPause.insert(m_menu.m_vecBMPause.end(),nouvBouton);
            break;

        case i==22:
            nouvBouton.sImage.setTexture(m_tBMCredits);
            m_menu.m_vecBMCredits.insert(m_menu.m_vecBMCredits.end(),nouvBouton);
            break;


        case i==23:
            nouvBouton.sImage.setTexture(m_tBMScores);
            m_menu.m_vecBMScores.insert(m_menu.m_vecBMScores.end(),nouvBouton);
            break;


        case i==24:
            nouvBouton.sImage.setTexture(m_tBMJeuEnCours);
            m_menu.m_vecBMJeuEnCours.insert(m_menu.m_vecBMJeuEnCours.end(),nouvBouton);
            break;

        case i>24 && i<28:
            nouvBouton.sImage.setTexture(m_tBMFinPartie);
            m_menu.m_vecBMFinPartie.insert(m_menu.m_vecBMFinPartie.end(),nouvBouton);
            break;

        default:
            break;
        }


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


void Menu::gestionTexture(){

    //gestion des textures des boutons
    switch(m_menu.m_typeMenu)
    {
    case e_menuPrincipal:
        for(int i=0; i<m_menu.m_vecBMPrincipal.size();i++)
        {
            switch(m_menu.m_vecBMPrincipal.at(i).nom)
            {
            case :
                break;

            case :
                break;

            case :
                break;

            case :
                break;

            case :
                break;

            case :
                break;

            default :
                break;
            }
        }

        break;

    case e_menuInstructions:
        for(int i=0; i<m_menu.m_vecBInstructions.size();i++)
        {

        }

        break;

    case e_menuOptions:
        for(int i=0; i<m_menu.m_vecBOptions.size();i++)
        {

        }

        break;

    case e_menuSelectNiveau:
        for(int i=0; i<m_menu.m_vecBSelectNiveau.size();i++)
        {

        }

        break;

    case e_menuPause:
        for(int i=0; i<m_menu.m_vecBPause.size();i++)
        {

        }

        break;

    case e_menuCredits:
        for(int i=0; i<m_menu.m_vecBCredits.size();i++)
        {

        }

        break;


    case e_menuScores:
        for(int i=0; i<m_menu.m_vecBScores.size();i++)
        {

        }

        break;

    case e_menuJeuEnCours:
        for(int i=0; i<m_menu.m_vecBJeuEnCours.size();i++)
        {

        }

        break;

    case e_menuFinPartie:
        for(int i=0; i<m_menu.m_vecBFinPartie.size();i++)
        {

        }

        break;

    default :
        break;
    }

}

Menu::~Menu(){

}
