//
//  announceWinner.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-29.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#include "announceWinner.h"
#include "LTexture.h"
#include "checkGameOver.h"


void announaceWinner()
{
    if(winner==9)
    {
        SDL_Color textColor = { 0, 0, 0 };
        textTexture.loadText("Its a tie!", textColor);
    }
    
    if(winner==0)
    {
        SDL_Color textColor = { 0, 0, 0 };
        textTexture.loadText("O wins!", textColor);
    }
    
    if(winner==0)
    {
        SDL_Color textColor = { 0, 0, 0 };
        textTexture.loadText("X wins!", textColor);
    }
}