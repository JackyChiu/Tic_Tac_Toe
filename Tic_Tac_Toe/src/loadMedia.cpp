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
    
    //o sprite
    SpriteClips[0].x=0;
    SpriteClips[0].y=0;
    SpriteClips[0].w=300;
    SpriteClips[0].h=271;
    
    //x sprite
    SpriteClips[1].x=300;
    SpriteClips[1].y=0;
    SpriteClips[1].w=300;
    SpriteClips[1].h=271;
    
    //button positions
    Buttons[0].setposition(0,0);
    Buttons[1].setposition(SCREEN_WIDTH/3, 0);
    Buttons[2].setposition(2*SCREEN_WIDTH/3, 0);
    Buttons[3].setposition(0, SCREEN_WIDTH/3);
    Buttons[4].setposition(SCREEN_WIDTH/3, SCREEN_WIDTH/3);
    Buttons[5].setposition(2*SCREEN_WIDTH/3, SCREEN_WIDTH/3);
    Buttons[6].setposition(0, 2*SCREEN_WIDTH/3);
    Buttons[7].setposition(SCREEN_WIDTH/3, 2*SCREEN_WIDTH/3);
    Buttons[8].setposition(2*SCREEN_WIDTH/3, 2*SCREEN_WIDTH/3);

}