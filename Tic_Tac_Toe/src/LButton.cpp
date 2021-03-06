//
//  LButton.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-25.
//  Copyright (c) 2015 Jacky Chiu. 
//
#include "LButton.h"
#include "LTexture.h"
#include "whichButton.h"
#include "checkGameOver.h"

SDL_Rect SpriteClips[BUTTON_SPRITE_TOTAL];
LButton Buttons[Total_Buttons];
LButtonSprite CurrentSprite;

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

void LButton::render()
{
    if(checkGameOver()==true)
    {
        a=50;
        ButtonSpriteSheet.setAlpha(a);
        ButtonSpriteSheet.render(mPosition.x,mPosition.y,&SpriteClips[CurrentSprite]);
    }
    else
    {
        a=255;
        ButtonSpriteSheet.setAlpha(a);
        ButtonSpriteSheet.render(mPosition.x,mPosition.y,&SpriteClips[CurrentSprite]);
    }
}

int LButton::getx()
{
    return mPosition.x;
}

int LButton::gety()
{
    return mPosition.y;
}