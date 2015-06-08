//
//  whichButton.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-26.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#include "whichButton.h"
#include "LButton.h"
#include "menu.h"

/* board layout:
    0, 1, 2,
    3, 4, 5,
    6, 7, 8
 */

int x=NULL,y=NULL;

int whichButton(int x,int y)
{
    
    if(startgame==true)
    {
        for(int i=0;i<9;i++)
        {
            if(x>Buttons[i].getx() && x<(Buttons[i].getx()+buttonWidth) && y>Buttons[i].gety() && y<(Buttons[i].gety()+buttonHeight))
            {
                return i;
            }
        }
    }
    else
    {
        for(int i=0;i<2;i++)
        {
            if(x>position[i].x && x<(position[i].x+position[i].w) && y>position[i].y && y<(position[i].y+position[i].h))
            {
                return i;
            }
        }
    }
    
    return 9;
}

