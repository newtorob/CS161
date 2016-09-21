/*********************************************************************
** Author: Robert Newton
** Date:07/01/2016
** Description:minmax.cpp -- program asks the user for a set of integers, the program then find the highest number and assigns it to max, then we find the lowest and assign it to min.
*********************************************************************/

#include <iostream>

using namespace std;

int main() {

  int usrInts, min, max, count, value;


  cout << "How many integers would you like to enter? " << endl;
  cin >> usrInts;

  cout << "Please enter "<< usrInts << " integers." << endl;


  for (count = 1; count <= usrInts; count++) {

    cin >> value;

    if (count == 1){
      max = value;
      min = value;
    }

    else if (value < min){
      min = value;
    }
    else if (value > max) {
      max = value;
    }
  }

  cout << "min: " << min << endl;
  cout << "max: " << max << endl;

  return 0;
}
