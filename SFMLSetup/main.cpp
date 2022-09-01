// Library includes
#include <iostream>
#include <vector>
#include "SFML/Graphics.hpp"

// Local includes

int main()
{
    // Window init
	sf::RenderWindow window(sf::VideoMode(1280, 720), "Default Name");  // Set window size
    window.setPosition(sf::Vector2i(600, 40));                          // Set window position
    window.requestFocus();                                              // Focus on window

    // Main window loop
    while (window.isOpen())
    {

    }
    
    // Main even poll loop
    sf::Event event;
    while (window.pollEvent(event))
    {

        if (event.type == sf::Event::Closed)
        {
            window.close();
            // delete stuff
        }

    }

	window.clear();
	window.display();
	return 0;
}