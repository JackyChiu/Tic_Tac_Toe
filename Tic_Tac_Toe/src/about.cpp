//
//  about.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-06-07.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#include "about.h"
#include "init.h"
#include "LTexture.h"
#include "announceWinner.h"

void about()
{
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
    SDL_RenderClear(gRenderer);
    
    font= TTF_OpenFont("data/MyriadPro.ttf", 50);
    textTexture.loadText("Created by Jacky Chiu", textColor);
    textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2 -100);
    
    font= TTF_OpenFont("data/MyriadPro.ttf", 25);
    textTexture.loadText("Programed in C++ with SDL2 libaries", textColor);
    textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2);
    
    textTexture.loadText("Press ecsape anywhere to return to menu", textColor);
    textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2 + 50);

    textTexture.loadText("Press space bar during game to reset board", textColor);
    textTexture.render( (SCREEN_WIDTH- textTexture.getwidth()) /2, (SCREEN_HEIGHT- textTexture.getheight()) /2 + 100);
}
