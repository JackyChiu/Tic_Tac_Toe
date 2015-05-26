//
//  main.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-21.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#include "init.h"
#include "close.h"
#include "drawboard.h"
#include "LTexture.h"
#include "LButton.h"
#include "loadMedia.h"

int main(int argc, char* argv[])
{
    //make window
    if(!init())
    {
        cout<<"Init failed";
    }
    
    //loads buttons and sprites
    loadMedia();
    
    bool quit=false;
    
    SDL_Event e;
    
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
    SDL_RenderClear(gRenderer);
    
    while(quit!=true)
    {
        while(SDL_PollEvent(&e)!=0)
        {
            if(e.type==SDL_QUIT)
            {
                quit=true;
            }
            
            drawboard();
            
            for(int i=0;i<Total_Buttons;i++)
            {
                Buttons[i].handleEvent(&e);
            }
            
            SDL_RenderPresent(gRenderer);
            
            SDL_Delay(100);

        }
    }
    
    close();
    
    return 0;
}

