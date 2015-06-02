//
//  init.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-21.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#include "init.h"

SDL_Window *gWindow=NULL;
SDL_Renderer *gRenderer=NULL;

int turn=0;

bool init()
{
    bool success=true;
    if(SDL_Init(SDL_INIT_VIDEO)>0)
    {
        cout<<"Failed init. SDL_ERROR: %s\n"<<SDL_GetError();
        success=false;
    }
    else
    {
        if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
        {
            cout<<"Warning: Linear texture filtering not enabled!"<<endl;
        }
        
        gWindow=SDL_CreateWindow("Tic Tac Toe",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,SCREEN_WIDTH,SCREEN_HEIGHT,SDL_WINDOW_SHOWN);
        
        if(gWindow==NULL)
        {
            cout<<"Couldnt make window. SDL_Error: %s\n"<<SDL_GetError()<<endl;
            success=false;
        }
        else
        {
            gRenderer=SDL_CreateRenderer(gWindow,-1,SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
            if(gRenderer==NULL)
            {
                cout<<"Renderer failed. SDL_Error: %s\n"<<SDL_GetError()<<endl;
                success=false;
            }
            else
            {
                SDL_SetRenderDrawColor(gRenderer,0xFF,0xFF,0xFF,0xFF);
                
                int imgFlags=IMG_INIT_PNG;
                if(!(IMG_Init(imgFlags)&imgFlags))
                {
                    cout<<"Image failed. SDl_image Error: %s\n"<<IMG_GetError()<<endl;
                    success=false;
                    
                if( TTF_Init() ==-1)
                {
                    cout<<"Text failed. SDL_ttf Error: %s\n"<<TTF_GetError()<<endl;
                    success=false;
                }
                    
                }
            }
        }
        
    }
    
    return success;
}