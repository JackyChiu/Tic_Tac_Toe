//
//  drawboard.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-22.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

//#include "drawboard.h"
#include "init.h"

void drawboard()
{
    SDL_SetRenderDrawColor( gRenderer, 0x00, 0x00, 0x00, 0xFF );
    
    for(int x=SCREEN_WIDTH/3;x<SCREEN_WIDTH;x+=SCREEN_WIDTH/3)
    {
        SDL_RenderDrawLine( gRenderer, x, 0, x, SCREEN_HEIGHT );
    }
    
    for(int y=SCREEN_HEIGHT/3;y<SCREEN_HEIGHT;y+=SCREEN_HEIGHT/3)
    {
        SDL_RenderDrawLine( gRenderer, 0, y, SCREEN_WIDTH, y);
    }
    
}
