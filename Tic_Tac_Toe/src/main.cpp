//
//  main.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-21.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#include "init.h"

int main(int argc, char* argv[])
{
    if(!init())
    {
        cout<<"Init failed";
    }
    
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
            SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
            SDL_RenderClear(gRenderer);

            drawboard();
            
            SDL_RenderPresent(gRenderer);
        }
    }
    
    return 0;
}
