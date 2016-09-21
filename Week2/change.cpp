/*********************************************************************
** Author:Robert Newton
** Date: 06/24/2016
** Description: Week 2 change.cpp
*********************************************************************/

#include <iostream>

using namespace std;

int main () {


  int cents, quar = 25, dim = 10, nic = 5, penn = 1;

  cout << "Please enter an amount in cents less than a dollar." <<endl;
  cin >> cents;

  //finding the remainder against the other values
  cout << "Your change will be: " << endl;
  cout << "Q: " << (cents / quar) << endl;
  cout << "D: " << (cents % quar)/dim << endl;
  cout << "N: " << (cents % quar % dim)/nic << endl;
  cout << "P: " << (cents % quar % dim %nic) << endl;
  //combining modulus and dvision to make sure we are going off the total cents, not individual denominations


return 0;

}
