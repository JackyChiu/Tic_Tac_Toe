//
//  LButton.h
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-25.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#ifndef Tic_Tac_Toe_LButton_h
#define Tic_Tac_Toe_LButton_h

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <SDL2_ttf/SDL_ttf.h>
#include <string>

using namespace std;

const int buttonWidth=230;
const int buttonHeight=230;
const int Total_Buttons=9;

enum LButtonSprite
{
    BUTTON_SPRITE_O,
    BUTTON_SPRITE_X,
    BUTTON_SPRITE_TOTAL
};

class LButton
{
public:
    LButton();
    void setposition(int x,int y);
    void render();
    int getx();
    int gety();
private:
    SDL_Point mPosition;
};

extern SDL_Rect SpriteClips[BUTTON_SPRITE_TOTAL];
extern LButton Buttons[Total_Buttons];
extern LButtonSprite CurrentSprite;

#endif
