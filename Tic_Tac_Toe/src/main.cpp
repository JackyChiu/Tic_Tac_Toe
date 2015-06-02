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
#include "whichButton.h"
#include "play.h"
#include "checkGameOver.h"
#include "announceWinner.h"

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
    
    
    while(quit!=true)
    {
        while(SDL_PollEvent(&e)!=0)
        {
            if(e.type==SDL_QUIT)
            {
                quit=true;
            }
            
            if(e.type==SDL_MOUSEBUTTONDOWN)
            {
                if(checkGameOver()==true)
                {
                    for(int i=0;i<3;i++)
                    {
                        for(int j=0;j<3;j++)
                        {
                            gameboard[i][j]=9;
                        }
                    }
                }
                
                SDL_GetMouseState( &x, &y );
                
                tile=whichButton(x,y);
            }
            
        }
        SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
        SDL_RenderClear(gRenderer);
        
        if(checkGameOver()==true)
        {
            announceWinner();
        }
        else
        {
            play();
        }
        
        drawboard();
        
        SDL_RenderPresent(gRenderer);
        
        SDL_Delay(100);
        
    }
    
    close();
    
    return 0;
}

