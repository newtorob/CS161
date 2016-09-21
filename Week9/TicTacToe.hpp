/*********************************************************************
** Author: Robert Newton
** Date: 08/01/2016
** Description: This header includes our class TicTacToe which contains the board object field,The void play function will start the game
*********************************************************************/

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include "Board.hpp"
/*********************************************************************
** Description: private and public functions for the player and the void play
**
*********************************************************************/
class TicTacToe
{
private:
   Board newBoard;
   char player;
  
public:
   TicTacToe(char player);
   void play();
};

#endif
