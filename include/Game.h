#ifndef GAME_H
#define GAME_H
#include<SFML/Graphics.hpp>
#include<iostream>
#include"math.h"

class Game
{
public:

Game();
void run();
sf::RenderWindow mWindow;
double vx_puck=0,vy_puck=1.1*sqrt(2);    //DEFINES ALL VELOCITIES OF PUCK,AI AND PLAYER
double vx_ai=0.4,vy_ai=0.4;
double vx_player,vy_player;
double vx_path,vy_path;
int s1=0,s2=0;                  //FOR DISPLAY OF SCORE
int algo_select=1;              //FOR RANDOMLY SELECTING ALGORTIHM OF AI


private:

void processEvents(sf::Time dt);            //MAIN GAME LOOP

void update();                          //UPDATES POSITIONS OF PLAYERS

void render();                          //DRAWS EVERYTHING ON SCREEN

sf::Vector2f handlePlayerInput(float x,float y);

sf::Texture mTexture;           // FOR PLAYER
sf::Sprite mPlayer;

sf::Vector2f movement;                  //FOR PLAYER MOVEMENTT

//sf::RectangleShape  arena;

sf::Texture mArena;                 //FOR BOARD
sf::Sprite iArena;

sf::Texture mPuck;
sf::Sprite sPuck;               //FOR PUCK

sf::Texture mAi;                //FOR COMPUTER PLAYER
sf::Sprite sAi;

sf::Font font1;                 //FOR FONTS

sf::Texture side_block;
sf::Sprite s_side_block;           // FOR SCORE SIDE TEXTURE

sf::Texture win_screen;
sf::Sprite s_win_screen;

sf::Texture lose_screen;
sf::Sprite s_lose_screen;

sf::Text text;          //TEXTS FOR SCORE
sf::Text text_;
sf::Text text1_0;
sf::Text text1_1;
sf::Text text1_2;
sf::Text text1_3;
sf::Text text1_4;
sf::Text text1_5;
sf::Text text1_6;
sf::Text text1_7;
sf::Text text2_0;
sf::Text text2_1;
sf::Text text2_2;
sf::Text text2_3;
sf::Text text2_4;
sf::Text text2_5;
sf::Text text2_6;
sf::Text text2_7;

};

#endif // GAME_H
