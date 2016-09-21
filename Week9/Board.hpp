/*********************************************************************
** Author: Robert Newton
** Date: 08/01/2016
** Description: This header file initiates the class Board as well as uses an enum
to store the X_WON, O_WON, DRAW, and UNFINISHED values, it contains our
print method and most importantly the makeMove method.
*********************************************************************/
#ifndef BOARD_HPP
#define BOARD_HPP

enum gameState { X_WON, O_WON, DRAW, UNFINISHED }; //enum for values

/*********************************************************************
** Description: Board class, gives us the private and public members
**
*********************************************************************/
class Board
{
private:
   char board[3][3];  
   int turn;

public:
  Board(); //default board constructor
   int gameState();
   void print();
   bool makeMove(int xC, int yC, char player);
  
};
#endif 
