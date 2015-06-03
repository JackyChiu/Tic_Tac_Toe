//
//  LTexture.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-24.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#include "LTexture.h"
#include "init.h"

LTexture ButtonSpriteSheet;
TTF_Font *font= NULL;
LTexture textTexture;
Uint8 a=255;

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
    
    SDL_Texture *newTexture=NULL;
    
    SDL_Surface* loadedSurface=IMG_Load(path.c_str());

    newTexture=SDL_CreateTextureFromSurface(gRenderer,loadedSurface);
    
    width=loadedSurface->w;
    height=loadedSurface->h;
    
    SDL_FreeSurface(loadedSurface);
    
    mTexture=newTexture;
}

void LTexture::loadText(string text, SDL_Color textColor)
{
    free();
    
    SDL_Texture *newTexture=NULL;
    
    SDL_Surface* textSurface= TTF_RenderText_Solid(font, text.c_str(), textColor);
    
    if( textSurface == NULL )
    {
        cout<<"Unable to render text surface! SDL_ttf Error: %s\n"<<TTF_GetError()<<endl;
    }
    
    newTexture= SDL_CreateTextureFromSurface(gRenderer, textSurface);
    
    if( newTexture == NULL )
    {
        cout<<"Unable to create texture from rendered text! SDL Error: %s\n"<<SDL_GetError()<<endl;
    }
    width=textSurface->w;
    height=textSurface->h;
    
    SDL_FreeSurface(textSurface);
    
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

void LTexture::setBlendMode(SDL_BlendMode blending)
{
    SDL_SetTextureBlendMode(mTexture, blending);
}

void LTexture::setAlpha( Uint8 alpha )
{
    //Modulate texture alpha
    SDL_SetTextureAlphaMod( mTexture, alpha );
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

int LTexture::getwidth()
{
    return width;
}

int LTexture::getheight()
{
    return height;
}
















