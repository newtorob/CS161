/*********************************************************************
** Author: Robert Newton
** Date: 07/07/2016
** Description: smallSort.cpp- This program takes 3 integers from the user then sorts them in ascending order.
We are using a void function and calling that function in the main function.
*********************************************************************/

#include <iostream>
#include <string>

using namespace std;


void smallSort (int &a, int &b, int &c); //prototype, needs & for reference



/*int main () {

    int a, b, c;

    cout << "Enter 3 integers and I will sort them" << endl;
    cin >> a >> b >> c;

    smallSort(a, b, c);

    cout << a << ", " << b << ", " << c << endl;
    return 0;
}*/

/*********************************************************************
** Description: This smallSort function takes integers in via reference and sorts them, the numbers come in as the user inputs them
  we take those numbers, compare them and swap them around until we get ascending order.
**
*********************************************************************/
//the swap functionality was difficult at first but needed to tinker with it.
void smallSort(int &a, int &b, int &c) {
    if (a > b) {
        int num = a;
        a = b;
        b = num;
    }
    if (a > c) {
        int num = a;
        a = c;
        c = num;
    }
    if (b > c) {
        int num = b;
        b = c;
        c = num;
    }
}
