//
//  LTexture.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-24.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#include "LTexture.h"
#include "init.h"

LTexture::LTexture()
{
    mTexture=NULL;
    width=0;
    height=0;
}

LTexture::~LTexture()
{
    free();
}

void LTexture::loadFromFile(string path)
{
    free();
    
    SDL_Texture *newTexture;
    
    SDL_Surface *loadedSurface=IMG_Load(path.c_str());
    
    newTexture=SDL_CreateTextureFromSurface(gRenderer,loadedSurface);
    
    width=loadedSurface->w;
    height=loadedSurface->h;
    
    SDL_FreeSurface(loadedSurface);
    
    mTexture=newTexture;
}

void LTexture::free()
{
    if(mTexture!=NULL)
    {
        SDL_DestroyTexture(mTexture);
        mTexture=NULL;
        width=0;
        height=0;
    }
}

void LTexture::render(int x, int y,SDL_Rect *clip)
{
    SDL_Rect renderQuad= {x,y,width,height};
    
    if (clip!=NULL)
    {
        renderQuad.w=clip->w;
        renderQuad.h=clip->h;
    }
    
    SDL_RenderCopy(gRenderer, mTexture, clip, &renderQuad);
}


















