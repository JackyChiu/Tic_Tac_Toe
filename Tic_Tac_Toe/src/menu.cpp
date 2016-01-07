//
//  menu.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-06-05.
//  Copyright (c) 2015 Jacky Chiu. 
//

#include "menu.h"
#include "init.h"
#include "LTexture.h"
#include "announceWinner.h"

bool gamecontinue=false;
bool startgame=false;
bool aboutstate=false;
SDL_Rect position[2];

void menu()
{
    textColor = { 0, 0, 0 };
    
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
    SDL_RenderClear(gRenderer);
    
    font= TTF_OpenFont("data/MyriadPro.ttf", 100);
    textTexture.loadText("Tic Tac Toe", textColor);
    textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2 -200);
    
    if(gamecontinue==false)
    {
        font= TTF_OpenFont("data/MyriadPro.ttf", 50);
        textTexture.loadText("Start Game", textColor);
        
        position[0].x=SCREEN_WIDTH/2-textTexture.getwidth()/2;
        position[0].y=SCREEN_HEIGHT/2-textTexture.getheight()/2;
        position[0].w=textTexture.getwidth();
        position[0].h=textTexture.getheight();
        
        textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2);

    }
    else
    {
        font= TTF_OpenFont("data/MyriadPro.ttf", 50);
        textTexture.loadText("Continue", textColor);
        
        position[0].x=(SCREEN_WIDTH- textTexture.getwidth()) /2;
        position[0].y=(SCREEN_HEIGHT- textTexture.getheight()) /2;
        position[0].w=textTexture.getwidth();
        position[0].h=textTexture.getheight();
        
        textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2);
    }
    
    font= TTF_OpenFont("data/MyriadPro.ttf", 50);
    textTexture.loadText("About", textColor);
    
    position[1].x=(SCREEN_WIDTH- textTexture.getwidth()) /2;
    position[1].y=(SCREEN_HEIGHT- textTexture.getheight()) /2+100;
    position[1].w=textTexture.getwidth();
    position[1].h=textTexture.getheight();
    
    textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2+100);

    
}
