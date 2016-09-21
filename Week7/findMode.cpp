/*********************************************************************
** Author: Robert Newton
** Date: 07/23/2016
** Description: findMode.cpp is a program that takes in integer values
from the user and finds which ones occurred the most, it then returns those
to the user.
*********************************************************************/


#include <iostream>
#include <vector> //needed for vectors
#include <algorithm> //needed for sort

using namespace std;

/*********************************************************************
** Description: our findMode receives the integers from the user,
finds which ones occur the most and returns the mode to the user
** if the user enters in the same number multiple times or we
have multiple numbers entered in the same amount of times, we return
those to the user.
*********************************************************************/
vector <int> findMode (int nums[], int size) { //so we don't have to convert to vector later
    int topFrequency = 1; //this will store the most frequent int
    vector <int> mode; //our mode will be stored here

    for (int i= 0; i < size; i++){ //outer loop for all our ints

        int current = 1; // accumulator of occurences


        for (int j = i + 1; j < size; j++){ //inner loop to find matches

            if (nums[j] == nums[i]) {
                current++; //if we find a match, we increment
            }
        }

        if (current == topFrequency) { //if true, push the stored value to the mode
          mode.push_back(nums[i]);
        }

        if (current > topFrequency) { //if one occurs more than another
          topFrequency = current;
          mode.clear(); // clear out the mode and store this one, it happens more
          mode.push_back(nums[i]); //push value to mode
        }

    }

    sort(mode.begin(), mode.end()); //sort our mode

    return mode; //return the mode

}
