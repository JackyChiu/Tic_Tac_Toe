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
#include "clearBoard.h"
#include "menu.h"
#include "about.h"

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
    
    int menubutton=0;
    
    SDL_Event e;
    
    
    while(quit!=true)
    {
        while(SDL_PollEvent(&e)!=0)
        {
            //quits game
            if(e.type==SDL_QUIT)
            {
                quit=true;
            }
            
            //clears board during game
            if(e.key.keysym.sym==SDLK_SPACE)
            {
                clearBoard();
            }
            
            //returns to menu
            if(e.key.keysym.sym==SDLK_ESCAPE)
            {
                if(startgame==true)
                {
                    gamecontinue=true;
                }
                startgame=false;
                aboutstate=false;
            }

            //click during game to play
            if(e.type==SDL_MOUSEBUTTONDOWN && startgame==true)
            {
                if(checkGameOver()==true)
                {
                    clearBoard();
                }
                
                else
                {
                    SDL_GetMouseState( &x, &y );
                    
                    tile=whichButton(x,y);
                }
            }
            
            //click either start or about
            if(e.type==SDL_MOUSEBUTTONDOWN && startgame==false)
            {
                SDL_GetMouseState( &x, &y );
                
                menubutton=whichButton(x,y);
                
                if(menubutton==0)
                {
                    startgame=true;
                }
                else if(menubutton==1)
                {
                    aboutstate=true;
                }
                
            }
        }
        
        if(startgame==false && aboutstate==false)
        {
            menu();
        }
        
        else if(startgame==false && aboutstate==true)
        {
            about();
        }
        
        else if(startgame==true && aboutstate==false)
        {
            SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
            SDL_RenderClear(gRenderer);
            
            play();
            drawboard();

            if(checkGameOver()==true)
            {
                announceWinner();
            }
            
        }

        SDL_RenderPresent(gRenderer);
        
        SDL_Delay(100);
        
    }
    
    close();
    
    return 0;
}

