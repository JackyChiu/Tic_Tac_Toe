//
//  close.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-23.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//


#include "init.h"
#include "LTexture.h"

void close()
{
    ButtonSpriteSheet.free();
    
    SDL_DestroyWindow(gWindow);
    gWindow=NULL;
    
    SDL_DestroyRenderer(gRenderer);
    gRenderer=NULL;
    
    SDL_Quit();
    IMG_Quit();
    
}