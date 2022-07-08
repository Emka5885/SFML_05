// Link do playlisty: https://www.youtube.com/watch?v=KNvRFEDQpOA&list=PLRtjMdoYXLf7DB3--POF9lYzaZu0poT5V&index=1



//Flappy Bird
#include <SFML/Graphics.hpp>

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 1024

int main()
{
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Flappy Bird");

    while (window.isOpen())
    {
        //handle events
        
        //update game logic

        //draw
        window.clear();

        //draw SFML objects

        window.display();
    }

    return EXIT_SUCCESS;
}