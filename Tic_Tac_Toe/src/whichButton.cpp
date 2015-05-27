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

int whichButton(int x,int y)
{
    if(x>Buttons[0].getx() && x<(Buttons[0].getx()+buttonWidth) && y>Buttons[0].gety() && y<(Buttons[0].gety()+buttonHeight))
    {
        return 0;
    }
    
    else if(x>Buttons[1].getx() && x<(Buttons[1].getx()+buttonWidth) && y>Buttons[1].gety() && y<(Buttons[1].gety()+buttonHeight))
    {
        return 1;
    }
    
    else if(x>Buttons[2].getx() && x<(Buttons[2].getx()+buttonWidth) && y>Buttons[2].gety() && y<(Buttons[2].gety()+buttonHeight))
    {
        return 2;
    }
    
    else if(x>Buttons[3].getx() && x<(Buttons[3].getx()+buttonWidth) && y>Buttons[3].gety() && y<(Buttons[3].gety()+buttonHeight))
    {
        return 3;
    }
    
    else if(x>Buttons[4].getx() && x<(Buttons[4].getx()+buttonWidth) && y>Buttons[4].gety() && y<(Buttons[4].gety()+buttonHeight))
    {
        return 4;
    }
    
    else if(x>Buttons[5].getx() && x<(Buttons[5].getx()+buttonWidth) && y>Buttons[5].gety() && y<(Buttons[5].gety()+buttonHeight))
    {
        return 5;
    }
    
    else if(x>Buttons[6].getx() && x<(Buttons[6].getx()+buttonWidth) && y>Buttons[6].gety() && y<(Buttons[6].gety()+buttonHeight))
    {
        return 6;
    }
    
    else if(x>Buttons[7].getx() && x<(Buttons[7].getx()+buttonWidth) && y>Buttons[7].gety() && y<(Buttons[7].gety()+buttonHeight))
    {
        return 7;
    }
    
    else if(x>Buttons[8].getx() && x<(Buttons[8].getx()+buttonWidth) && y>Buttons[8].gety() && y<(Buttons[8].gety()+buttonHeight))
    {
        return 8;
    }
    
    else
    {
        return 9;
    }
}
