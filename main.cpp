#include<SFML/Graphics.hpp>
#include<Game.h>
#include"windows.h"

int main()
{
Game game;

sf::Texture texture;
    // take input of interface
    if (!texture.loadFromFile("Interface.jpg"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);
    sprite.setPosition(22,25);


	// take input of Newgame button
	sf::Texture texture_newgame;
    if (!texture_newgame.loadFromFile("Newgame.jpg"))
        return EXIT_FAILURE;
    sf::Sprite sprite_newgame(texture_newgame);
    sprite_newgame.setPosition(370,100);
    sprite_newgame.setScale(0.5,0.5);

    // take input of how to play button
    sf::Texture texture_howtoplay;
    if (!texture_howtoplay.loadFromFile("howtoplay.jpg"))
        return EXIT_FAILURE;
    sf::Sprite sprite_howtoplay(texture_howtoplay);
    sprite_howtoplay.setPosition(370,250);
    sprite_howtoplay.setScale(0.5,0.5);

    // take input of credits button
     sf::Texture texture_credits;
    if (!texture_credits.loadFromFile("Credits.jpg"))
        return EXIT_FAILURE;
    sf::Sprite sprite_credits(texture_credits);
    sprite_credits.setPosition(370,380);
    sprite_credits.setScale(0.5,0.5);

    // take input of how to play interface
    sf::Texture texture_howtoplayinteface;
    if (!texture_howtoplayinteface.loadFromFile("howtoplayinterface.jpg"))
        return EXIT_FAILURE;
    sf::Sprite sprite_howtoplay_interface(texture_howtoplayinteface);
    sprite_howtoplay_interface.setPosition(10,40);
    sprite_howtoplay_interface.setScale(1,1);

    // take input of credits interface
    sf::Texture texture_credit_interface;
    if (!texture_credit_interface.loadFromFile("Creditsinter.jpg"))
        return EXIT_FAILURE;
    sf::Sprite sprite_credit_interface(texture_credit_interface);
    sprite_credit_interface.setPosition(25,5);
    sprite_credit_interface.setScale(0.95,0.95);


    while (game.mWindow.isOpen())
    {
       sf::Event Event;
       while (game.mWindow.pollEvent(Event))
        {
            game.mWindow.clear(); //clear the screen to update position position of sprite

        // Draw the sprite on the window
            game.mWindow.draw(sprite);
            game.mWindow.draw(sprite_newgame);
            game.mWindow.draw(sprite_credits);
            game.mWindow.draw(sprite_howtoplay);

        // Update the window
            game.mWindow.display();
            // Close window : exit
            if (Event.type == sf::Event::Closed)
                game.mWindow.close();
            if(Event.type==sf::Event::MouseButtonPressed)
                { //takes mouse input
                if(Event.mouseButton.x>=374 && Event.mouseButton.x<=615 &&Event.mouseButton.y>=103 && Event.mouseButton.y<=200) //new game starts
                {
                    game.s1=0,game.s2=0;   //for starting a new game
                    PlaySound("Click.wav",NULL,SND_ASYNC);
                    game.run(); //runs the game.h file
                }
                else if(Event.mouseButton.x>=374 && Event.mouseButton.x<=615 &&Event.mouseButton.y>=252 && Event.mouseButton.y<=346) //opens how to play interface
                {
                    PlaySound("Click.wav",NULL,SND_ASYNC);
                sf::Event Event2;
                while(game.mWindow.isOpen()) //checks the input while game.mwindow is open
                {
                    bool exit_window1=false; //ensures that while loop is broken
                    while(game.mWindow.pollEvent(Event2))
                    {
                        game.mWindow.clear();
                        game.mWindow.draw(sprite_howtoplay_interface);
                        game.mWindow.display();

                        if(Event2.type==sf::Event::MouseButtonPressed)
                        {

                            if(Event2.mouseButton.x>=868 && Event2.mouseButton.x<=1010 &&Event2.mouseButton.y>=35 && Event2.mouseButton.y<=120){exit_window1=true;
                            PlaySound("Click.wav",NULL,SND_ASYNC);
                            break;}

                        }
                    }
                    if(exit_window1==true) break;
                }
                }
                else if(Event.mouseButton.x>=374 && Event.mouseButton.x<=615 &&Event.mouseButton.y>=380 && Event.mouseButton.y<=482)
                {PlaySound("Click.wav",NULL,SND_ASYNC);
                sf::Event Event3;
                while(game.mWindow.isOpen()) //checks the input while game.mwindow is open
                {
                    bool exit_window2=false;  //ensures that while loop is broken
                    while(game.mWindow.pollEvent(Event3))
                    {
                        game.mWindow.clear();
                        game.mWindow.draw(sprite_credit_interface);
                        game.mWindow.display();

                        if(Event3.type==sf::Event::MouseButtonPressed)
                        {
                            if(Event3.mouseButton.x>=830 && Event3.mouseButton.x<=1010 &&Event3.mouseButton.y>=3 && Event3.mouseButton.y<=120){ exit_window2=true;
                            PlaySound("Click.wav",NULL,SND_ASYNC);
                            break;}

                        }
                    }
                    if(exit_window2==true) break;
                }

            }
            }
        }
    }
}



