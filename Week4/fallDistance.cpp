/*********************************************************************
** Author: Robert Newton
** Date: 07/07/2016
** Description: fallDistance.cpp - this program takes the time from the user in the form of seconds
    we then take that number, run it through the formula for distance and return the distance to the user.
*********************************************************************/

#include <iostream>
#include <cmath>//needed for cmath

using namespace std;


double fallDistance (double t);//fallDistance function prototype

int main () {
    double t;

    cout << "Give me the time in seconds" << endl;

    cin >> t;

    cout << fallDistance(t);

    return 0;

}

/*********************************************************************
** Description: fallDistance takes the t variable the user inputs in the main function
    after run the first part of the distance formula we multiply it by the time after it has been doubled.
**
**************************f*******************************************/

double fallDistance(double t) {
    double d;

    d = (0.5 * 9.8) * pow(t, 2); // the formula needed to find distance


    return d;//we return distance

}
