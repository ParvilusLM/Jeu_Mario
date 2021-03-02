#include <iostream>
#include <SFML/Graphics.hpp>
#include "constantes.h"

using namespace sf;


int main()
{
	// TODO Creer la boucle principale pour le programme
	std::cout << "Bonjour";
	sf::RenderWindow fenetre(VideoMode(cLARGEUR_FEN,cHAUTEUR_FEN),"Mario");

	while (fenetre.isOpen())
	{
		sf::Event evenement;
		while (fenetre.pollEvent(evenement))
		{
			if (evenement.type==Event::Closed)
			{
				fenetre.close();
			}
		}


		fenetre.clear(Color(86, 58, 65));

		fenetre.display();


	}


	return 0;
}