/*********************************************************************
** Author: Robert Newton
** Date: 06/30/2016
** Description: numGuess.cpp - User guesses the entered number, a loop increments if that number is wrong and outputs the amount of guesses it took them once they get it right.
*********************************************************************/

#include <iostream>
using namespace std;

int main() {
  float initNum, guess;

  cout << "Enter the number for the player to guess" << endl;
  cin >> initNum;

  cout << "Enter your guess" << endl;
  cin >> guess;

for (int count = 1; ;count ++) {


    if (guess > initNum) {
      cout << "Too high - try again." <<endl;
      cin >> guess;
    }
    else if (guess < initNum) {
      cout << "Too low - try again."<<endl;
      cin >> guess;
    }
    else if (guess == initNum){
      cout << "You guessed it in " << count << " tries."<<endl;
      break;
    }
  }


  return 0;
}
