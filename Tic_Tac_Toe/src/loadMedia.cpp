//
//  loadMedia.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-25.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#include "loadMedia.h"
#include "LButton.h"
#include "LTexture.h"
#include "init.h"

void loadMedia()
{
    ButtonSpriteSheet.loadFromFile("data/ox.png");
    
    TTF_Init();
    
    font= TTF_OpenFont("data/MyriadPro.ttf", 65);
    if( font == NULL )
    {
        cout<<"Failed to load font! SDL_ttf Error: %s\n"<< TTF_GetError()<<endl;
    }

    
    //o sprite
    SpriteClips[0].x=0;
    SpriteClips[0].y=0;
    SpriteClips[0].w=230;
    SpriteClips[0].h=230;
    
    //x sprite
    SpriteClips[1].x=230;
    SpriteClips[1].y=0;
    SpriteClips[1].w=230;
    SpriteClips[1].h=230;
    
    //button positions
    Buttons[0].setposition(0,0);
    Buttons[1].setposition(buttonWidth, 0);
    Buttons[2].setposition(2*buttonWidth, 0);
    Buttons[3].setposition(0, buttonHeight);
    Buttons[4].setposition(buttonWidth, buttonHeight);
    Buttons[5].setposition(2*buttonWidth, buttonHeight);
    Buttons[6].setposition(0, 2*buttonHeight);
    Buttons[7].setposition(buttonWidth, 2*buttonHeight);
    Buttons[8].setposition(2*buttonWidth, 2*buttonHeight);

}