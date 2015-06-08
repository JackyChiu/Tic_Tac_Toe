//
//  clearBoard.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-06-05.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#include "clearBoard.h"
#include "play.h"
#include "whichButton.h"

void clearBoard()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            gameboard[i][j]=9;
        }
    }
    
    x=NULL;
    y=NULL;
    tile=9;
}
