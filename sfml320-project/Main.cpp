#include <SFML/Graphics.hpp>
#include <iostream>
#include "Classes/bullet.cpp"
#include <tuple>
#define PI 3.14159265358979323846

double anglePos = 0;

int main()
{
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "320 Project");
	printf("Window created and activated \n");

	// Load all textures
	sf::Texture ship_texture;
	sf::Texture alien_texture;
	sf::Texture background_texture;
	sf::Texture bullet_texture;
	sf::Texture proface_texture;

	// Load files to texture
	if (!ship_texture.loadFromFile("Images/spaceShip.png"))
	{
		std::cout << "Load failed" << std::endl;
		system("pause");
	}
	if (!alien_texture.loadFromFile("Images/alien.png"))
	{
		std::cout << "Load failed" << std::endl;
		system("pause");
	}
	if (!background_texture.loadFromFile("Images/background.jpg"))
	{
		std::cout << "Load failed" << std::endl;
		system("pause");
	}
	if (!bullet_texture.loadFromFile("Images/bullet.png"))
	{
		std::cout << "Load failed" << std::endl;
		system("pause");
	}
	if (!proface_texture.loadFromFile("Images/proface.png"))
	{
		std::cout << "Load failed" << std::endl;
		system("pause");
	}

	// Make sprites from textures
	sf::Sprite ship;
	ship.setTexture(ship_texture);

	sf::Sprite alien;
	alien.setTexture(alien_texture);

	sf::Sprite proface;
	proface.setTexture(proface_texture);

	sf::Sprite background;
	background.setTexture(background_texture);

	sf::Sprite bullet;
	bullet.setTexture(bullet_texture);
	//sf::Sprite bullet2;
	//bullet2.setTexture(bullet_texture);


	// Set origins for sprites
	sf::Rect<float> ship_size = ship.getGlobalBounds();
	ship.setOrigin(sf::Vector2f(ship_size.width / 2, ship_size.height / 2));

	// Set initial positions for sprites	
	ship.setPosition(150 * std::sin(anglePos) + (1920 / 2), 150 * std::cos(anglePos) + (1080 / 2));
	alien.setPosition(sf::Vector2f(800, 100));
	ship.setRotation(-anglePos * 180 / PI + 180);
	sf::Rect<float> proface_size = proface.getGlobalBounds();
	proface.setOrigin(sf::Vector2f(proface_size.width / 2, proface_size.height / 2));
	proface.setPosition(sf::Vector2f(1920 / 2, 1080 / 2));
	background.setPosition(sf::Vector2f(0, 0));
	bullet.setPosition(sf::Vector2f(-10, -10));
	//bullet2.setPosition(sf::Vector2f(-10, -10));

	// Scale initial sprites
	ship.setScale(10, 10);
	alien.setScale(7, 7);
	proface.setScale(0.4, 0.4);
	background.setScale(3, 3);
	bullet.setScale(2, 2);
	//bullet2.setScale(2, 2);

	Bullet player_bullet;
	player_bullet = Bullet(-10, -10, 0, 0);
	//player_bullet[1] = Bullet(-10, -10, 2, 0);
	int i = 0;



	
	// Move up 200 pizels
	//ship.move(sf::Vector2f(200, 0));

	// Get position
	//sf::Vector2f position = ship.getPosition();
	//position.x;
	//position.y;

	// Rotate to 45 degrees (clockwise)
	//ship.setRotation(45); 
	// This one increases the angle by 10 degrees
	//ship.rotate(10);
	//float rotation = ship.getRotation();

	// Scale
	//ship.setScale(sf::Vector2f(1.0f, 2.0f));
	//ship.setScale(30, 30);
	// to scale based on current scale:
	//ship.scale(2,2)  //make it (60,60) in this case

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

				// key pressed
				case sf::Event::KeyPressed:
					
					break;

			}

		}
		// update game
		//Spacebar
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		{
			std::cout << "Shoot!" << std::endl;
			// Get ship position
			sf::Vector2f position = ship.getPosition();
			float rotation = ship.getRotation();
			player_bullet.setX(position.x);
			player_bullet.setY(position.y);
			player_bullet.setAng(rotation);
			player_bullet.setSpd(2);
		}
		//Right arrow key
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			anglePos -= 0.01;
			ship.setPosition(150 * std::sin(anglePos) + (1920 / 2), 150 * std::cos(anglePos) + (1080 / 2));
			ship.setRotation(-anglePos * 180 / PI + 180);
		}
		//Left arrow key
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			anglePos += 0.01;
			ship.setPosition(150 * std::sin(anglePos) + (1920 / 2), 150 * std::cos(anglePos) + (1080 / 2));
			ship.setRotation(-anglePos * 180 / PI + 180);
		}
		tuple <float, float> bullet_tuple;
		bullet_tuple = player_bullet.bulletMovement();
		bullet.setPosition(get<0>(bullet_tuple), get<1>(bullet_tuple));
		//bullet2.setPosition(player_bullet[1].getX(), player_bullet[1].getY());


		// Make a black window
		window.clear(sf::Color::Black);

		// This is where you draw...
		window.draw(background);
		if (alien.getGlobalBounds().intersects(bullet.getGlobalBounds()))
		{
			std::cout << "Collision" << std::endl;
		}
		else
		{
			window.draw(alien);
		}
		window.draw(ship);
		window.draw(proface);
		window.draw(bullet);



		// End the current frame
		window.display();


	}

	return 0;
}