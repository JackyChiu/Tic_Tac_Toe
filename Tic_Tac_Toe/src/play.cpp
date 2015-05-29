//
//  play.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-27.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#include "play.h"
#include "LButton.h"

int tile=0;

void play()
{
    if(tile!=9)
    {
        cout<<"Clicked";
        CurrentSprite=BUTTON_SPRITE_X;
        Buttons[tile].render();
    }
}
