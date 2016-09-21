/*********************************************************************
** Author:Robert Newton
** Date:06/24/16
** Description:Week 2 average.cpp
*********************************************************************/

#include <iostream>


using namespace std;

int main() {
  float num1, num2, num3, num4, num5, avg;
  //float to deal with decimals
  cout << "Please enter five numbers." << endl;
  //we take in 5 different inputs, on seperate lines for spacing/ocd
  cin >> num1;
  cin >> num2;
  cin >> num3;
  cin >> num4;
  cin >> num5;

  cout << "The average of those numbers is: " << endl;
  //take the sum of the numbers and divide by 5
  avg = (num1 + num2 + num3 + num4 + num5)/5;

  cout << avg <<endl;

  return 0;

}
