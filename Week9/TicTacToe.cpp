/*********************************************************************
** Author: Robert Newton
** Date: 08/01/2016
** Description: TicTacToe.cpp, this program includes our main method, it will
also see which player won, make sure the move the player made was valid, if
it is not it will print out the square is taken, if all moves are made and there
is no winner, it will cause a draw
*********************************************************************/


#include <iostream>
#include "TicTacToe.hpp"
#include "Board.hpp"

using namespace std;
/*********************************************************************
** Description:  Sets our x and o
**
*********************************************************************/
TicTacToe::TicTacToe(char firstMove)
{
   player = firstMove;
}
//Logic for playing the game
void TicTacToe::play()
{
   int status = newBoard.gameState();
   int xC, yC;
  
   do
   {
     cout << "Player " << static_cast<char>(toupper(player)) << " please enter your move. "; // gets the player for the current move
      
       cin >> xC >> yC;
       //see if move is valid
       if (newBoard.makeMove(xC, yC, player))
       {
           
         newBoard.makeMove(xC, yC, player);//record move
           
         newBoard.print(); //print the board to the screen
           
         status = newBoard.gameState(); //update the status of the board
           if (player == 'x')
           {
               player = 'o';
           }
           else player = 'x';
       }
       else
       {
           cout << "That square is already taken\n";
       }      
   }
   while (status == UNFINISHED);
   if (status == X_WON)
   {
     cout << "Player X wins!" <<endl;
   }
   else if (status == O_WON)
   {
     cout << "Player O wins!" <<endl;
   }
   else if (status == DRAW)
   {
     cout << "Draw!" <<endl;
   }
}
/*********************************************************************
** Description: main function to start the game
**
*********************************************************************/
int main()
{
   TicTacToe newGame('x');
  
   newGame.play();

   return 0;
}
