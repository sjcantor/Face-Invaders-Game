#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	sf::Window window(sf::VideoMode(1900, 900), "320 Project");
	printf("Window created and activated");

	while (window.isOpen())
	{
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
	}
}