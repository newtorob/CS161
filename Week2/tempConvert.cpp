/*********************************************************************
** Author:Robert Newton
** Date: 06/24/2016
** Description: Week 2 tempConvert.cpp
*********************************************************************/

#include <iostream>

using namespace std;

int main() {
  const float CONVERT = 1.8;
  //declare float const, converted to decimal to make formula easier to work with
  float c,f;


  cout << "Please enter a Celsius temperature."<<endl;
  cin >> c;
  //take in celcius
  f = (CONVERT * c) + 32;
//formula for converting to Fahrenheit
  cout << "The equivalent Fahrenheit temperature is: "<<endl;
  cout << f <<endl;
//print out result
  return 0;

}
