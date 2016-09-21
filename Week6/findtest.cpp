#include <algorithm>    // needed for the std::sort() function
#include <vector>       // needed to use the std::vector type
#include <iostream>


using namespace std;


/*********************************************************************
** Description: Determines which values from an unsorted list of
**              integers are its modes and returns them in a vector.
**              They are sorted in ascending order.  Complexity is
**              roughly O(nlogn) time, where n is the number of items
**              contained in the list.
*********************************************************************/

vector<int> findMode(int nums[], int size) {
  int maxFreq = 1;    // store highest found frequency
  vector<int> modes;  // store all modes

  // loop through all the integers
  for (int i = 0; i < size; i++) {

    int curFreq = 1;  // accumulator for occurrences of value
                      // at index i, starting from index i + 1

    // starting at the index after i, loop through the integers
    // in the list, seeking any matches with the value at index i

    // note: starting after index i will prevent duplicate values
    // from being pushed to modes
    for (int j = i + 1; j < size; j++) {

      // if a match is found, increment the accumulator
      if (nums[i] == nums[j]) {
        curFreq++;
      }
    }

    // if the accumulator for index i matches the maximum frequency
    // seen thus far, push the value stored at index i to modes
    if (curFreq == maxFreq) {
      modes.push_back(nums[i]);
    }

    // if the accumulator for index i is greater than the maximum
    // frequency seen, update maxFreq, clear all values stored in
    // modes (since there are other values that occur more
    // frequently), and push the value stored at index i to modes
    if (curFreq > maxFreq) {
      maxFreq = curFreq;
      modes.clear();
      modes.push_back(nums[i]);
    }
  }

  // sort all the modes
  sort(modes.begin(), modes.end());

  return modes;
}

int main() {
  const int MAX_NUM_VALS = 25;
  int values[MAX_NUM_VALS];
  int numVals = 0;
  int totalElements = 0;

  cout << "How many integers would you like to enter?" << endl;
  cin >> totalElements;

  if (totalElements < 1) { totalElements = 1; }
  else if (totalElements > 25) { totalElements = 25; }

  cout << "Please enter the integers: " << endl;
  for (int i = 0; i < totalElements; i++) {
    cin >> values[i];
  }

  vector<int> modes = findMode(values, totalElements);
  cout << "The modes:" << endl;
  for (int i = 0; i < modes.size(); i++) {
    cout << modes[i] << "  ";
  }

  cout << endl;

  return 0;
}
