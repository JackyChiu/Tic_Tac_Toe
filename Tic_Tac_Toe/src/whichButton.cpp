//
//  whichButton.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-26.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#include "whichButton.h"
#include "LButton.h"

/* board layout:
    0, 1, 2,
    3, 4, 5,
    6, 7, 8
 */

int x=NULL,y=NULL;

int whichButton(int x,int y)
{
    for(int i=0;i<9;i++)
    {
        if(x>Buttons[i].getx() && x<(Buttons[i].getx()+buttonWidth) && y>Buttons[i].gety() && y<(Buttons[i].gety()+buttonHeight))
        {
            return i;
        }
    }
    
    return 9;
}

