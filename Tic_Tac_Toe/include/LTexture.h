//
//  LTexture.h
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-24.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#ifndef Tic_Tac_Toe_LTexture_h
#define Tic_Tac_Toe_LTexture_h

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <SDL2_ttf/SDL_ttf.h>
#include <string>

using namespace std;

class LTexture
{
public:
    LTexture();
    ~LTexture();
    void loadFromFile(string);
    void loadText(string,SDL_Color);
    void free();
    void setBlendMode(SDL_BlendMode);
    void setAlpha(Uint8);
    void render(int x,int y,SDL_Rect *clip=NULL);
    int getheight();
    int getwidth();
private:
    SDL_Texture *mTexture;
    int width;
    int height;
};

extern TTF_Font *font;
extern LTexture textTexture;
extern LTexture ButtonSpriteSheet;
extern Uint8 a;

#endif
