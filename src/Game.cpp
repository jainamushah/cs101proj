#include "Game.h"
#include"VEC2D.h"
#include<iostream>
#include"math.h"
#include<windows.h>
#include"Line.h"
#include<ctime>

Game::Game():mWindow(sf::VideoMode(1300.f,640.f),"Air Hockey Testing")     //GAME CONSTRUCTOR ALSO BUILDS THE WINDOW
{
    if(!mTexture.loadFromFile("blue paddle.png"))                          //LOADS ALL THE SPRITES REQUIRED
    {
        //Handle loading error
    }
    if(!mArena.loadFromFile("graphics (3).jpg"))
    {
        //Handle loading error
    }
    if(!mPuck.loadFromFile("puck_60x60.png"))
    {
        //Handle loading error
    }
    if(!mAi.loadFromFile("green paddle.png"))
    {
        //Handle loading error
    }
    if(!font1.loadFromFile("Digit.ttf"))                                  //LOADS FONT REQUIRED FOR SCORE
    {
        //Handle loading error
    }
    if(!side_block.loadFromFile("side-texture.jpg"))
    {
        //Handle loading error
    }
    if(!win_screen.loadFromFile("UWIN.jpg"));
    {
        //Handle loading error
    }
    if(!lose_screen.loadFromFile("ULOST.jpg"));
    {
        //Handle loading error
    }

    text.setFont(font1);                                //SETTING STRINGS FOR EVERY POSSIBLE SCORE
    text.setString("S C O R E");
    text.setPosition(1080,100);
    text.setCharacterSize(50);
    text.setColor(sf::Color(141,221,0));

    text_.setFont(font1);
    text_.setString("-");
    text_.setPosition(1165,160);
    text_.setCharacterSize(50);
    text_.setColor(sf::Color(141,221,0));

    text1_0.setFont(font1);
    text1_0.setString("0");
    text1_0.setPosition(1125,160);
    text1_0.setCharacterSize(50);
    text1_0.setColor(sf::Color(141,221,0));

    text2_0.setFont(font1);
    text2_0.setString("0");
    text2_0.setPosition(1200,160);
    text2_0.setCharacterSize(50);
    text2_0.setColor(sf::Color(141,221,0));

    text1_1.setFont(font1);
    text1_1.setString("1");
    text1_1.setPosition(1125,160);
    text1_1.setCharacterSize(50);
    text1_1.setColor(sf::Color(141,221,0));

    text2_1.setFont(font1);
    text2_1.setString("1");
    text2_1.setPosition(1200,160);
    text2_1.setCharacterSize(50);
    text2_1.setColor(sf::Color(141,221,0));

    text1_2.setFont(font1);
    text1_2.setString("2");
    text1_2.setPosition(1125,160);
    text1_2.setCharacterSize(50);
    text1_2.setColor(sf::Color(141,221,0));

    text2_2.setFont(font1);
    text2_2.setString("2");
    text2_2.setPosition(1200,160);
    text2_2.setCharacterSize(50);
    text2_2.setColor(sf::Color(141,221,0));

    text1_3.setFont(font1);
    text1_3.setString("3");
    text1_3.setPosition(1125,160);
    text1_3.setCharacterSize(50);
    text1_3.setColor(sf::Color(141,221,0));

    text2_3.setFont(font1);
    text2_3.setString("3");
    text2_3.setPosition(1200,160);
    text2_3.setCharacterSize(50);
    text2_3.setColor(sf::Color(141,221,0));

    text1_4.setFont(font1);
    text1_4.setString("4");
    text1_4.setPosition(1125,160);
    text1_4.setCharacterSize(50);
    text1_4.setColor(sf::Color(141,221,0));

    text2_4.setFont(font1);
    text2_4.setString("4");
    text2_4.setPosition(1200,160);
    text2_4.setCharacterSize(50);
    text2_4.setColor(sf::Color(141,221,0));

    text1_5.setFont(font1);
    text1_5.setString("5");
    text1_5.setPosition(1125,160);
    text1_5.setCharacterSize(50);
    text1_5.setColor(sf::Color(141,221,0));

    text2_5.setFont(font1);
    text2_5.setString("5");
    text2_5.setPosition(1200,160);
    text2_5.setCharacterSize(50);
    text2_5.setColor(sf::Color(141,221,0));

    text1_6.setFont(font1);
    text1_6.setString("6");
    text1_6.setPosition(1125,160);
    text1_6.setCharacterSize(50);
    text1_6.setColor(sf::Color(141,221,0));

    text2_6.setFont(font1);
    text2_6.setString("6");
    text2_6.setPosition(1200,160);
    text2_6.setCharacterSize(50);
    text2_6.setColor(sf::Color(141,221,0));

    text1_7.setFont(font1);
    text1_7.setString("7");
    text1_7.setPosition(1125,160);
    text1_7.setCharacterSize(50);
    text1_7.setColor(sf::Color(141,221,0));

    text2_7.setFont(font1);
    text2_7.setString("7");
    text2_7.setPosition(1200,160);
    text2_7.setCharacterSize(50);
    text2_7.setColor(sf::Color(141,221,0));                    //SCORE RELATED CODE OVER

    mPlayer.setTexture(mTexture);                               //SETS THE SPRITES ON APPROPRIATE POSITIONS
    mPlayer.setPosition(0.f,0.f);
    mPlayer.setOrigin(64.0f,64.0f);

    iArena.setTexture(mArena);
    iArena.setPosition(510.f,320.f);
    iArena.setOrigin(510.f,310.f);

    sPuck.setTexture(mPuck);
    sPuck.setPosition(0.f,0.f);
    sPuck.setOrigin(30.f,30.f);
    sPuck.move(510.f,320.f);

    sAi.setTexture(mAi);
    sAi.setPosition(0.f,0.f);
    sAi.setOrigin(64.0f,64.0f);
    sAi.setPosition(250.f,310.f);

    s_side_block.setTexture(side_block);
    s_side_block.setPosition(1020.f,0.f);

    s_win_screen.setTexture(win_screen);
    s_win_screen.setPosition(0.f,0.f);

    s_lose_screen.setTexture(lose_screen);
    s_lose_screen.setPosition(0.f,0.f);

}

void Game::run()                                //MAIN FUNCTION WHICH HANDLES GAME THROUGHOUT RUNTIME
{   sf::Clock clock;


    while(mWindow.isOpen())
    {
        sf::Time deltatime=clock.restart();

        if(s1==7)
        {
            mWindow.clear();
            mWindow.draw(s_lose_screen);
            mWindow.display();
            while(mWindow.isOpen()){
            sf::Event (Event1);
            while(mWindow.pollEvent(Event1))
                {
                    if(Event1.type==sf::Event::KeyPressed)
                        if(Event1.key.code==sf::Keyboard::Return)
                        {
                            return;
                        }
                }
        }}

        if(s2==7)
        {
            mWindow.clear();
            mWindow.draw(s_win_screen);
            mWindow.display();
            while(mWindow.isOpen()){
            sf::Event (Event2);
            while(mWindow.pollEvent(Event2))
                {
                    if(Event2.type==sf::Event::KeyPressed)
                        if(Event2.key.code==sf::Keyboard::Return)
                        {
                            return;
                        }
                }
        }}

        processEvents(deltatime);              //PROCESSES PLAYER INPUTS, MOVEMENT OF PUCK & AI
        render();
                                       //DRAWS EVERY IMAGE ON THE WINDOW
    }
}

void Game::processEvents(sf::Time dt)
{
    sPuck.move(vx_puck,vy_puck);                //MOVES THE PUCK
    //sAi.move(vx_ai,vy_ai);

    sf::Event(event);

    if(sPuck.getPosition().x>=970)                                  //COLLIDES WITH WALL
       {
           if(sPuck.getPosition().y>=177&&sPuck.getPosition().y<=463)
           {
               PlaySound("score.wav",NULL,SND_ASYNC);               //PRODUCES SOUND
               sPuck.setPosition(510.f,320.f);
               vx_puck=0;                                           //IF GOAL GOES THEN
               vy_puck=1.25*sqrt(2);
               mPlayer.setPosition(800.f,320.f);                    //RESETS PUCK AND MALLETS OF AI AND PLAYER
               s1++;
               sAi.setPosition(160.f,320.f);
           }
           else
           {
               vx_puck=-vx_puck;
               PlaySound("hitSide.wav",NULL,SND_ASYNC);            //OTHERWISE REBOUNDS THE PUCK
           }
       }
    if(sPuck.getPosition().x<=50)
       {

           if(sPuck.getPosition().y>=177&&sPuck.getPosition().y<=463)
           {
               PlaySound("score.wav",NULL,SND_ASYNC);                  //THE SAME FOR OTHER WALL
               sPuck.setPosition(510.f,320.f);
               vx_puck=0;
               vy_puck=1.25*sqrt(2);
               mPlayer.setPosition(800.f,320.f);
               sAi.setPosition(160.f,320.f);
               s2++;
           }
           else
           {
               vx_puck=-vx_puck;
               PlaySound("hitSide.wav",NULL,SND_ASYNC);
           }

        }
    if(sPuck.getPosition().y>=590)                             //REBOUNDS THE WALL & MAKES SOUND
        {
            vy_puck=-vy_puck;
            PlaySound("hitSide.wav",NULL,SND_ASYNC);
        }
    if(sPuck.getPosition().y<=50)                               //REBOUNDS THE WALL & MAKES SOUND
        {
            vy_puck=-vy_puck;
            PlaySound("hitSide.wav",NULL,SND_ASYNC);
        }
   /* if(sAi.getPosition().y<=69)
    {
        vy_ai=-vy_ai;
    }
    if(sAi.getPosition().y>=571)
    {
        vy_ai=-vy_ai;
    }
    if(sAi.getPosition().x<=59)
    {
        vx_ai=-vx_ai;
    }
    if(sAi.getPosition().x>=471)
    {
        vx_ai=-vx_ai;
    }*/

    if(((sPuck.getPosition().x-mPlayer.getPosition().x)*(sPuck.getPosition().x-mPlayer.getPosition().x)+(sPuck.getPosition().y-mPlayer.getPosition().y)*(sPuck.getPosition().y-mPlayer.getPosition().y))<=4761)
    {
        VEC2D r_puck(sPuck.getPosition().x,sPuck.getPosition().y);
        VEC2D r_player(mPlayer.getPosition().x,mPlayer.getPosition().y);
        VEC2D v_puck(vx_puck,vy_puck);                                          //COLLISION NORMAL ALGO
        VEC2D normal=r_player.diff(r_puck).normalize();
        v_puck=v_puck.diff(normal.scale(2*v_puck.dot_product(normal)));
        double vx_temp_puck=v_puck.x;
        double vy_temp_puck=v_puck.y;
        vx_puck=1.3*vx_temp_puck/sqrt(0.5*vx_temp_puck*vx_temp_puck+0.5*vy_temp_puck*vy_temp_puck);
        vy_puck=1.3*vy_temp_puck/sqrt(0.5*vx_temp_puck*vx_temp_puck+0.5*vy_temp_puck*vy_temp_puck);
        PlaySound("hitPuck.wav",NULL,SND_ASYNC);                            //PLAYS SOUND

    }

    if(((sPuck.getPosition().x-sAi.getPosition().x)*(sPuck.getPosition().x-sAi.getPosition().x)+(sPuck.getPosition().y-sAi.getPosition().y)*(sPuck.getPosition().y-sAi.getPosition().y))<=4761)
    {
        //std::cout<<sPuck.getPosition().x<<std::endl;
        VEC2D r_puck(sPuck.getPosition().x,sPuck.getPosition().y);
        VEC2D r_ai(sAi.getPosition().x,sAi.getPosition().y);
        VEC2D v_puck(vx_puck,vy_puck);
        VEC2D v_ai(vx_ai,vy_ai);
        VEC2D rel_vel=v_puck.diff(v_ai);
        VEC2D c=r_ai.diff(r_puck);
        double cdotvhat=c.dot_product(rel_vel.normalize());
        double m=rel_vel.dot_product(c.normalize());                            //COLLISION INCLUDING INTERPOLATION OF FRAMES
        double s=cdotvhat*cdotvhat-c.Length()*c.Length()+4761;                  //AND PLAYS SOUND
        double d=-cdotvhat+sqrt(s);                                             //INCLUDES ALSO BOUNDARY CONDITIONS
        r_puck=r_puck.diff(v_puck.normalize().scale(d));
        VEC2D rsum=v_puck.normalize().sum(v_ai.normalize());
        r_ai=r_ai.diff(rsum.scale(d));
        v_ai=v_ai.sum(c.normalize().scale(m));
        v_puck=v_puck.diff(c.normalize().scale(m));
        r_puck=r_puck.sum(v_puck.normalize().scale(d));
        r_ai=r_ai.sum(v_ai.normalize().scale(d));
        if(r_ai.y>=571)r_ai.y=570;
        if(r_ai.y<=59)r_ai.y=60;
        if(r_puck.y>=590)r_puck.y=589;
        if(r_puck.y<=50)r_puck.y=51;
        if(r_puck.x<=50)r_puck.x=51;
        if(r_ai.x>=471)r_ai.x=470;
        if(r_ai.x<=59)r_ai.x=60;
        sPuck.setPosition(r_puck.x,r_puck.y);
        sAi.setPosition(r_ai.x,r_ai.y);
        double vx_temp_puck=v_puck.x;
        double vy_temp_puck=v_puck.y;
        vx_puck=1.3*vx_temp_puck/sqrt(0.5*vx_temp_puck*vx_temp_puck+0.5*vy_temp_puck*vy_temp_puck);
        vy_puck=1.3*vy_temp_puck/sqrt(0.5*vx_temp_puck*vx_temp_puck+0.5*vy_temp_puck*vy_temp_puck);
        PlaySound("hitPuck.wav",NULL,SND_ASYNC);
        srand(time(0));
        int temp1=1+rand()%5;
        algo_select+=temp1;

    }

    //AI ALGO STARTS :-

    if(vx_puck<0)
    {
             Line desired_path1(740,50,-200/230);
             Line puck_path1(sPuck.getPosition().x,sPuck.getPosition().y,vy_puck/vx_puck);   //ATTACKS THROUGH A WELL DEFINED LINE
             Line ai_pos1(desired_path1.inter_pnt(puck_path1));

             Line desired_path2(740,590,200/230);
             Line puck_path2(sPuck.getPosition().x,sPuck.getPosition().y,vy_puck/vx_puck);   //ATTACKS THROUGH A WELL DEFINED LINE
             Line ai_pos2(desired_path2.inter_pnt(puck_path2));

             if(ai_pos1.x>=59&&ai_pos1.y>=59&&ai_pos1.x<=471&&ai_pos1.y<=581)                //THUS KEEPING A CERTAIN DEGREE OF RANDOMNESS
            {                                                                               //TO ENSURE IT IS ALSO BEATABLE
                VEC2D ai_desired1(ai_pos1.x,ai_pos1.y);
                VEC2D v_tempai(ai_desired1.x-sAi.getPosition().x,ai_desired1.y-sAi.getPosition().y);
                vx_ai=2*v_tempai.normalize().x;
                vy_ai=2*v_tempai.normalize().y;
                sAi.move(vx_ai,vy_ai);
            }

            else if(ai_pos2.x>=59&&ai_pos2.y>=59&&ai_pos2.x<=471&&ai_pos2.y<=581)                //THUS KEEPING A CERTAIN DEGREE OF RANDOMNESS
            {                                                                               //TO ENSURE IT IS ALSO BEATABLE
                VEC2D ai_desired2(ai_pos2.x,ai_pos2.y);
                VEC2D v_tempai(ai_desired2.x-sAi.getPosition().x,ai_desired2.y-sAi.getPosition().y);
                vx_ai=2*v_tempai.normalize().x;
                vy_ai=2*v_tempai.normalize().y;
                sAi.move(vx_ai,vy_ai);
            }

            else
            {
                if(sPuck.getPosition().x<=510)
                       {

                        VEC2D traject(sPuck.getPosition().x-sAi.getPosition().x,sPuck.getPosition().y-sAi.getPosition().y);
                        vx_ai=2.5*traject.normalize().x;
                        vy_ai=2.5*traject.normalize().y;
                        if(sPuck.getPosition().x!=160.f,sPuck.getPosition().y!=320.f)
                            sAi.move(vx_ai,vy_ai);

                        }

            }
    }

    if(vx_puck>0)
    {
        VEC2D traject(160.f-sAi.getPosition().x,320.f-sAi.getPosition().y);       //DEFENSIVE MODE
        vx_ai=traject.normalize().x;
        vy_ai=traject.normalize().y;                                              //GOES BACK TO A FIXED POSITION
            sAi.move(vx_ai,vy_ai);
        //std::cout<<vx_puck<<std::endl;
       // std::cout<<vy_ai<<std::endl;


    }

    //AI ALGO ENDS

    while (mWindow.pollEvent(event))
    {

       if(event.type==sf::Event::MouseButtonPressed)                           //TAKES INPUT FROM PLAYER THROUGH MOUSE
       {                                                                        //EVENT GIVES CO-ORDINATES OF MOUSE
           movement=handlePlayerInput(event.mouseButton.x,event.mouseButton.y); //THEREBY THE SPRITE IS MOVED TO THAT POSITION
           VEC2D movemt(movement.x,movement.y);
           vx_player=movemt.x;
           vy_player=movemt.y;
           //cout<<vx_player<<endl<<vy_player<<endl;
           this->update();
       }
       if(event.type==sf::Event::MouseMoved)
       {
           movement=handlePlayerInput(event.mouseMove.x,event.mouseMove.y);
           VEC2D movemt(movement.x,movement.y);
           vx_player=movemt.x;
           vy_player=movemt.y;
           //cout<<vx_player<<endl<<vy_player<<endl;
           this->update();
       }

       if(mPlayer.getPosition().x>=961)                             //BOUNDS THE PLAYER INTO THE DESIRES HALF
       {
           mPlayer.setPosition(961,mPlayer.getPosition().y);        //MOUSE CAN BE MOVED THROUGHOUT THE MONITOR
       }
       if(mPlayer.getPosition().x<=549)                             //BUT THE PLAYER SHOULD REMAIN WITHIN BOUNDS
       {
           mPlayer.setPosition(549,mPlayer.getPosition().y);
       }
       if(mPlayer.getPosition().y<=69)
       {
           mPlayer.setPosition(mPlayer.getPosition().x,69);
       }
       if(mPlayer.getPosition().y>=571)
       {
           mPlayer.setPosition(mPlayer.getPosition().x,571);
       }

        VEC2D r_puck(sPuck.getPosition().x,sPuck.getPosition().y);
        VEC2D r_player(mPlayer.getPosition().x,mPlayer.getPosition().y);
        VEC2D v_puck(vx_puck,vy_puck);
        VEC2D v_player(vx_player,vy_player);
        VEC2D r_ai(sAi.getPosition().x,sAi.getPosition().y);
        VEC2D v_ai(vx_ai,vy_ai);
       if(((sPuck.getPosition().x-mPlayer.getPosition().x)*(sPuck.getPosition().x-mPlayer.getPosition().x)+(sPuck.getPosition().y-mPlayer.getPosition().y)*(sPuck.getPosition().y-mPlayer.getPosition().y))<=4761)
       {
            VEC2D c=r_player.diff(r_puck);
            double d2=c.dot_product(v_puck.normalize());
            double d1=sqrt(d2*d2-c.Length()*c.Length()+4761);
            double d=d1-d2;
            r_puck=r_puck.diff(v_puck.normalize().scale(d));
            if(r_puck.y>=590)r_puck.y=589;
            if(r_puck.y<=50)r_puck.y=51;
            if(r_puck.x>=970)r_puck.x=969;
            sf::Vector2f new_r(r_puck.x,r_puck.y);
            sPuck.setPosition(new_r);
            VEC2D normal=r_player.diff(r_puck).normalize();
            v_puck=v_puck.diff(normal.scale(2*v_puck.dot_product(normal)));
            double vx_temp_puck=v_puck.x;
            double vy_temp_puck=v_puck.y;
            vx_puck=1.3*vx_temp_puck/sqrt(0.5*vx_temp_puck*vx_temp_puck+0.5*vy_temp_puck*vy_temp_puck);
            vy_puck=1.3*vy_temp_puck/sqrt(0.5*vx_temp_puck*vx_temp_puck+0.5*vy_temp_puck*vy_temp_puck);
            PlaySound("hitPuck.wav",NULL,SND_ASYNC);
        }
       /*if(((sPuck.getPosition().x-mPlayer.getPosition().x)*(sPuck.getPosition().x-mPlayer.getPosition().x)+(sPuck.getPosition().y-mPlayer.getPosition().y)*(sPuck.getPosition().y-mPlayer.getPosition().y))<=4761)
       {
            VEC2D v_rel=v_puck.diff(v_player.normalize());
            VEC2D c=r_player.diff(r_puck);
            double d2=c.dot_product(v_rel.normalize());
            double d1=sqrt(d2*d2-c.Length()*c.Length()+4761);
            double d=d1-d2;
            r_puck=r_puck.diff(v_rel.normalize().scale(d));
            sf::Vector2f new_r(r_puck.x,r_puck.y);
            sPuck.setPosition(new_r);
            VEC2D normla=r_player.diff(r_puck).normalize();
            v_puck=v_rel.diff(normla.scale(2*v_rel.dot_product(normla)));
            double vx_temp_puck=v_puck.x;
            double vy_temp_puck=v_puck.y;
            vx_puck=vx_temp_puck/sqrt(0.5*vx_temp_puck*vx_temp_puck+0.5*vy_temp_puck*vy_temp_puck);
            vy_puck=vy_temp_puck/sqrt(0.5*vx_temp_puck*vx_temp_puck+0.5*vy_temp_puck*vy_temp_puck);
       }*/

       if(event.type==sf::Event::Closed)                    //WINDOW CLOSES ON CLICKING ON 'X' BUTTON

       mWindow.close();
    }
}
void Game::update()                                         //USED FOR UPDATING INPUT
{
    mPlayer.move(movement);
}


sf::Vector2f Game::handlePlayerInput(float x,float y)      //USED FOR UPDATING INPUT
{
    sf::Vector2f last_pos=mPlayer.getPosition();
    sf::Vector2f new_pos(x,y);
    sf::Vector2f movement1=new_pos-last_pos;
    return movement1;
}


void Game::render()
{
   mWindow.clear();
   mWindow.draw(iArena);                        //DRAWS ALL SPRITES AND TEXTS
   mWindow.draw(sPuck);
   mWindow.draw(mPlayer);
   mWindow.draw(s_side_block);
   mWindow.draw(sAi);
   mWindow.draw(text);
   mWindow.draw(text_);
   switch(s1)
   {
        case 0:                                         //DISPLAYS SCORE OF AI
        {
            mWindow.draw(text1_0);
            break;
        }
        case 1:
        {
            mWindow.draw(text1_1);
            break;
        }
        case 2:
        {
            mWindow.draw(text1_2);
            break;
        }
        case 3:
        {
            mWindow.draw(text1_3);
            break;
        }
        case 4:
        {
            mWindow.draw(text1_4);
            break;
        }
        case 5:
        {
            mWindow.draw(text1_5);
            break;
        }
        case 6:
        {
            mWindow.draw(text1_6);
            break;
        }
        case 7:
        {
            mWindow.draw(text1_7);
        }

   }

switch(s2)
    {
        case 0:                                         //DISPLAYS SCORE OF PLAYER
        {
            mWindow.draw(text2_0);
            break;
        }
        case 1:
        {
            mWindow.draw(text2_1);
            break;
        }
        case 2:
        {
            mWindow.draw(text2_2);
            break;
        }
        case 3:
        {
            mWindow.draw(text2_3);
            break;
        }
        case 4:
        {
            mWindow.draw(text2_4);
            break;
        }
        case 5:
        {
            mWindow.draw(text2_5);
            break;
        }
        case 6:
        {
            mWindow.draw(text2_6);
            break;
        }
        case 7:
        {
            mWindow.draw(text2_7);
            break;
        }
    }
mWindow.display();                      //DISPLAYS EVERYTHING DRAWN

}
