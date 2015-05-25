//
//  LButton.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-25.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//
#include "LButton.h"
#include "LTexture.h"

SDL_Rect SpriteClips[BUTTON_SPRITE_TOTAL];
LButton Buttons[Total_Buttons];

LButton::LButton()
{
    mPosition.x=0;
    mPosition.y=0;
}

void LButton::setposition(int x,int y)
{
    mPosition.x=x;
    mPosition.y=y;
}

void LButton::handleEvent(SDL_Event* e)
{
    if(e->type==SDL_MOUSEBUTTONDOWN)
    {
        CurrentSprite=BUTTON_SPRITE_X;
    }
}

void LButton::render()
{
    ButtonSpriteSheet.render(mPosition.x,mPosition.y,&SpriteClips[CurrentSprite]);
}