//
//  menu.h
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-06-05.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#ifndef Tic_Tac_Toe_menu_h
#define Tic_Tac_Toe_menu_h

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <SDL2_ttf/SDL_ttf.h>
#include <string>

using namespace std;

extern bool startgame;
extern bool gamecontinue;
extern bool aboutstate;

extern SDL_Rect position[2];

void menu();

#endif
