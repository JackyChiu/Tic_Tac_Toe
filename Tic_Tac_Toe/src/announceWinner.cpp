//
//  announceWinner.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-29.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#include "announceWinner.h"
#include "init.h"
#include "LTexture.h"
#include "checkGameOver.h" 


void announceWinner()
{
    SDL_Color textColor = { 0, 0, 0 };
    
    if(winner==3)
    {
        textTexture.loadText("It's a tie!", textColor);
        textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2);
    }
    
    if(winner==0)
    {
        textTexture.loadText("O wins!", textColor);
        textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2);
    }
    
    if(winner==1)
    {
        textTexture.loadText("X wins!", textColor);
        textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2);
    }
}