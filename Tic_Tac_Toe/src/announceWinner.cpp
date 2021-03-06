//
//  announceWinner.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-29.
//  Copyright (c) 2015 Jacky Chiu. 
//

#include "announceWinner.h"
#include "init.h"
#include "LTexture.h"
#include "checkGameOver.h" 

SDL_Color textColor = { 0, 0, 0 };

void announceWinner()
{
    if(winner==3)
    {
        font= TTF_OpenFont("data/MyriadPro.ttf", 65);
        textTexture.loadText("It's a tie!", textColor);
        textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2);
        
        font= TTF_OpenFont("data/MyriadPro.ttf", 30);
        textTexture.loadText("Click or press space to restart", textColor);
        textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2+50);
    }
    
    if(winner==0)
    {
        font= TTF_OpenFont("data/MyriadPro.ttf", 65);
        textTexture.loadText("O wins!", textColor);
        textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2);
        
        font= TTF_OpenFont("data/MyriadPro.ttf", 30);
        textTexture.loadText("Click or press space to restart", textColor);
        textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2+50);
    }
    
    if(winner==1)
    {
        font= TTF_OpenFont("data/MyriadPro.ttf", 65);
        textTexture.loadText("X wins!", textColor);
        textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2);
        
        font= TTF_OpenFont("data/MyriadPro.ttf", 30);
        textTexture.loadText("Click or press space to restart", textColor);
        textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2+50);
    }
}