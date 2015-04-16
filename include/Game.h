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
double vx_puck=0,vy_puck=1.1*sqrt(2);
double vx_ai=0.4,vy_ai=0.4;
double vx_player,vy_player;
double vx_path,vy_path;
int s1=0,s2=0;
int algo_select=1;


private:

void processEvents(sf::Time dt);

void update();

void render();

sf::Vector2f handlePlayerInput(float x,float y);

sf::Texture mTexture;
sf::Sprite mPlayer;

sf::Vector2f movement;

//sf::RectangleShape  arena;

sf::Texture mArena;
sf::Sprite iArena;

sf::Texture mPuck;
sf::Sprite sPuck;

sf::Texture mAi;
sf::Sprite sAi;

sf::Font font1;

sf::Texture side_block;
sf::Sprite s_side_block;

sf::Texture win_screen;
sf::Sprite s_win_screen;

sf::Texture lose_screen;
sf::Sprite s_lose_screen;

sf::Text text;
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
