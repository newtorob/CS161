/*********************************************************************
 ** Author: Robert Newton
 ** Date: 08/01/2016
** Description: Board.cpp - In this program we use the loop to keep the game moving,
we first take the move in x and y coordinates from the user and feed that into the loop
if that position is taken we alert the user and ask for another position, we then
see if player 1 has won, or player 2 or if it is a tie or if the game is unfinished
*********************************************************************/


#include <iostream>
#include "Board.hpp"

using namespace std;

/*********************************************************************
** Description:  Board class, sets the board for the player
**
*********************************************************************/
Board::Board()
{
   turn = 0;
   for (int i = 0; i < 3; i++)
       for (int j = 0; j < 3; j++)
           board[i][j] = '.';
}
/*********************************************************************
** Description:  We take the x and y and the player for the arguments, if the board
is unoccupied we record the move and return a true, else we return
false
**
*********************************************************************/

bool Board::makeMove(int x, int y, char player)
{
   if (board[x][y] == '.')
   {
       board[x][y] = player;
       return true;
   }
   else return false;
}
/*********************************************************************
** Description: Gamestate determines the winner a draw case or if the game
is unfinished
**
*********************************************************************/
int Board::gameState()
{

   turn++;
   char winner = '.';

   //Tests winning logic for each of the 8 different possible win conditions
   if ((board[0][0] == 'x' || board[0][0] == 'o') && (board[0][0] == board[0][1]) && (board[0][0] == board[0][2]))
   {
       winner = board[0][0];
   }
   else if ((board[0][0] == 'x' || board[0][0] == 'o') && (board[0][0] == board[1][0]) && (board[0][0] == board[2][0]))
   {
     winner = board[0][0];
   }
   else if ((board[0][0] == 'x' || board[0][0] == 'o') && (board[0][0] == board[1][1]) && (board[0][0] == board[2][2]))
   {
       winner = board[0][0];
   }
   else if ((board[0][1] == 'x' || board[0][1] == 'o') && (board[0][1] == board[1][1]) && (board[0][1] == board[2][1]))
   {
       winner = board[0][1];
   }
   else if ((board[0][2] == 'x' || board[0][2] == 'o') && (board[0][2] == board[1][2]) && (board[0][2] == board[2][2]))
   {
       winner = board[0][2];
   }
   else if ((board[1][0] == 'x' || board[1][0] == 'o') && (board[1][0] == board[1][1]) && (board[1][0] == board[1][2]))
   {
       winner = board[1][0];
   }
   else if ((board[2][0] == 'x' || board[2][0] == 'o') && (board[2][0] == board[2][1]) && (board[2][0] == board[2][2]))
   {
       winner = board[2][0];
   }
   else if ((board[2][2] == 'x' || board[2][2] == 'o') && (board[2][2] == board[1][1]) && (board[2][2] == board[0][2]))
   {
       winner = board[2][2];
   }
   if (turn == 9)
   {
       return DRAW;
   }
   if (winner == 'x')
   {
       return X_WON;
   }
   else if (winner == 'o')
   {
       return O_WON;
   }
   else return UNFINISHED;

}

/*********************************************************************
** Description: Prints the state of the current board to the screen for the player
**
*********************************************************************/
void Board::print()
{
   cout << " " << endl;
   for (int p = 0; p < 3; p++)
   {
       cout << "   " << p;
   };
   cout << endl;
   for (int i = 0; i < 3; i++)
       for (int j = 0; j < 3; j++)
       {
           if (j == 0)
           {
               cout << i << " ";
           };
           cout << board[i][j] << "   ";
           if (j == 2)
           {
               cout << endl;
           }

       }

}

