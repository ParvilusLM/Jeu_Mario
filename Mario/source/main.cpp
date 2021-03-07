#include <iostream>
#include <SFML/Graphics.hpp>
#include "constantes.h"

using namespace sf;


int main()
{
	// TODO Creer la boucle principale pour le programme

	// Recuperer le desktop video mode actif
	sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();

	int LARGEUR_FEN= desktopMode.width;
	int HAUTEUR_FEN= desktopMode.height;

	std::cout << "Bonjour";
	sf::RenderWindow fenetre(VideoMode(LARGEUR_FEN,HAUTEUR_FEN, desktopMode.bitsPerPixel),"Mario", Style::None);

	//ajout une image test
	sf::Texture texture;
	texture.loadFromFile("donnees/images/bg.png");

	sf::Sprite background;
	background.setTexture(texture);

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


		fenetre.clear(Color(86, 58, 65));

		fenetre.draw(background);

		fenetre.display();


	}


	return 0;
}
