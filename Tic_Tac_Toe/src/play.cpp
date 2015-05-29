//
//  play.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-27.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#include "play.h"
#include "LButton.h"
#include "whichButton.h"
#include "init.h"

int tile=9;

/*  9 for empty
 0 for o
 1 for x
 */
int gameboard[3][3]={9,9,9,
                     9,9,9,
                     9,9,9};

void play()
{
    int counter=0;
    
    if(tile!=9)
    {
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<tile<<endl;
        
        if(turn%2==0 && gameboard[tile/3][tile%3]==9)
        {
            gameboard[tile/3][tile%3]=0;
            turn++;
        }
        
        if(turn%2==1 && gameboard[tile/3][tile%3]==9)
        {
            gameboard[tile/3][tile%3]=1;
            turn++;
        }

    }
    
    for(int i=0;i<3;i++)
    {
        for (int j=0; j<3; j++)
        {
            if(gameboard[i][j]==0)
            {
                CurrentSprite=BUTTON_SPRITE_O;
                Buttons[counter].render();
            }
            
            if(gameboard[i][j]==1)
            {
                CurrentSprite=BUTTON_SPRITE_X;
                Buttons[counter].render();
            }
            
            counter++;
        }
    }
}
