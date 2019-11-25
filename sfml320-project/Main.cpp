#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(2000, 1000), "320 Project");
	printf("Window created and activated");

	sf::Texture texture;

	if (!texture.loadFromFile("Images/spaceShip.png"))
	{
		std::cout << "Load failed" << std::endl;

		system("pause");
	}

	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setPosition(sf::Vector2f(1000, 500));


	while (window.isOpen())
	{
		// Check an event and deal with it 
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
				case sf::Event::Closed:
					window.close();
					break;

				// Window is resized
				case sf::Event::Resized:
					std::cout << "new width: " << event.size.width << std::endl;
					std::cout << "new height: " << event.size.height << std::endl;
			}

		}

		// Make a black window
		window.clear(sf::Color::Black);

		// Draw something...
		window.draw(sprite);

		window.display();


	}

	return 0;
}