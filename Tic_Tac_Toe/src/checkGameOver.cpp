//
//  checkGameOver.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-29.
//  Copyright (c) 2015 Jacky Chiu. All rights reserved.
//

#include "checkGameOver.h"
#include "play.h"

int winner=9;

bool checkGameOver()
{
    // vertical
    for(int i=0;i<3;i++)
    {
        if(gameboard[0][i]!=9 && gameboard[0][i]==gameboard[1][i] && gameboard[1][i]==gameboard[2][i])
        {
            winner=gameboard[0][i];
            return true;
        }
    }
    
    // horizontal
    for(int i=0;i<3;i++)
    {
        if(gameboard[i][1]!=9 && gameboard[i][0]==gameboard[i][1] && gameboard[i][1]==gameboard[i][2])
        {
            winner=gameboard[0][i];
            return true;
        }
    }
    
    //tie
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(gameboard[i][j]==9)
            {
                return false;
            }
        }
    }
    return true;
}