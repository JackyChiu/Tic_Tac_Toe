//
//  drawboard.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-22.
//  Copyright (c) 2015 Jacky Chiu. 
//

//#include "drawboard.h"
#include "init.h"
#include "drawboard.h"
#include "LButton.h"
#include "checkGameOver.h"

void drawboard()
{
    if(checkGameOver()==true)
    {
        SDL_SetRenderDrawColor( gRenderer, 0xCC, 0xCC, 0xCC, 0xFF );
    }
    else
    {
        SDL_SetRenderDrawColor( gRenderer, 0x00, 0x00, 0x00, 0xFF );
    }
    
    for(int x=buttonWidth;x<SCREEN_WIDTH;x+=buttonWidth)
    {
        SDL_RenderDrawLine( gRenderer, x, 0, x, SCREEN_HEIGHT );
    }
    
    for(int y=buttonHeight;y<SCREEN_HEIGHT;y+=buttonHeight)
    {
        SDL_RenderDrawLine( gRenderer, 0, y, SCREEN_WIDTH, y);
    }
}
