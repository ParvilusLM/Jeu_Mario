#include <iostream>
#include <SFML/Graphics.hpp>
#include "constantes.h"

using namespace sf;

//Les variables globales


int main()
{
	// TODO Creer la boucle principale pour le programme

	// Recuperer le desktop video mode actif
	sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();

	int LARGEUR_FEN= desktopMode.width;
	int HAUTEUR_FEN= desktopMode.height;

	std::cout << "Bonjour";
	sf::RenderWindow fenetre(VideoMode(LARGEUR_FEN,HAUTEUR_FEN, desktopMode.bitsPerPixel),"Mario", Style::None);


    //cretion de la vue principale
    sf::View vuePrincipale(FloatRect(0.f,0.f,LARGEUR_FEN,HAUTEUR_FEN));


	//ajout une image test
	sf::Texture texture;
	texture.loadFromFile("donnees/images/tileset/BG.png");

	sf::Sprite background;
	background.setPosition(0.f,0.f);
	background.setTexture(texture);

	sf::Time t=sf::seconds(0.05f);

	while (fenetre.isOpen())
	{
		sf::Event evenement;
		while (fenetre.pollEvent(evenement))
		{
			if (evenement.type==Event::Closed)
			{
				fenetre.close();
			}


			if(evenement.type==Event::KeyPressed && evenement.key.code==Keyboard::Home)
			{
				fenetre.close();
			}

		}

		vuePrincipale.move(0,1.f);

		sf::sleep(t);


		fenetre.clear(Color(86, 58, 65));


		fenetre.setView(vuePrincipale);

		fenetre.draw(background);



		fenetre.display();


	}


	return 0;
}
