//
//  init.h
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-21.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#ifndef __Tic_Tac_Toe__init__
#define __Tic_Tac_Toe__init__

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <SDL2_ttf/SDL_ttf.h>
#include <string>

using namespace std;

bool init();

const int SCREEN_WIDTH=690;
const int SCREEN_HEIGHT=690;

extern int turn;

extern SDL_Window *gWindow;
extern SDL_Renderer *gRenderer;


#endif /* defined(__Tic_Tac_Toe__init__) */
