/*********************************************************************
** Author:Robert Newton
** Date:07/01/2016
** Description:fileAdder.cpp - this program asks the user for a specified file to open, if the file is present and can be opened it will read the file for integers, add them together and put the total in the variable sum. We output the sum to a file the program creates called "sum.txt". If the file doesn't exist or cannot be found we output an error code to the console.
*********************************************************************/


#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int main () {

  string filename;
  double sum, number;
  ifstream inputFile;
  ofstream outputFile;



  cout << "What is the name of your file?" << endl;
  cin >> filename;

  inputFile.open(filename.c_str());

  sum = 0;

  if (inputFile) {

      while (inputFile >> number) {
          sum += number;
      }
      inputFile.close();

      outputFile.open("sum.txt");

      outputFile << sum;

      outputFile.close();

    
  }
  else {
      cout << "could not access file";
  }
  return 0;
}
