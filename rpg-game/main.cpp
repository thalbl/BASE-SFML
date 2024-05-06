#include <SFML/Graphics.hpp>
#include <iostream>


int main()
{
    sf::VideoMode VM(1280, 720);
    sf::RenderWindow window(VM, "Pong");

    while (window.isOpen()) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
            window.close();
        }
    }
}