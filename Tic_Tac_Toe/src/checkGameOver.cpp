//
//  checkGameOver.cpp
//  Tic_Tac_Toe
//
//  Created by Jacky Chiu on 2015-05-29.
//  Copyright (c) 2015 Jacky Chiu. 
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
            winner=gameboard[i][0];
            return true;
        }
    }
    
    //diagonal
    if(gameboard[0][0]!=9 && gameboard[0][0]==gameboard[1][1] && gameboard[1][1]==gameboard[2][2])
    {
        winner=gameboard[0][0];
        return true;
    }
    
    if(gameboard[2][0]!=9 && gameboard[2][0]==gameboard[1][1] && gameboard[1][1]==gameboard[0][2])
    {
        winner=gameboard[2][0];
        return true;
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
    winner=3;
    return true;
}