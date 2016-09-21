/*********************************************************************
** Author: Robert Newton
** Date: 07/07/2016
** Description: hailstone.cpp --
this program takes a positive integer from the user, if that number is even we divide by 2
if the number is odd, we multiply by 3 and add 1, once the program reaches 1, we
output the total count for the program.
*********************************************************************/

#include <iostream>


using namespace std;

int hailstone (int num);//funciton prototype, ints only


/*int main() {

    int num;

    cout << "give me a number" << endl;

    cin >> num;

    cout << hailstone(num);



    return 0;
}*/

/*********************************************************************
** Description:
** the hailstone function takes the integer, if that number is even
we divide by 2, otherwise we multiply by 3 and add 1
if the number is 1 we end the loop,
if it is not a positive int, the program does not run.
*********************************************************************/

int hailstone(int num) {
    int count;


    for (count = 0; num > 1; count++){
        if (num == 1){
            cout << count; // if the number comes in as 1 we end the loop, cout 0
            break;
        }
        else if (num % 2 ==0) {
            num = num/2; //divide if it is even

        }
        else  {
            num = num * 3 + 1; // mult by 3 and add 1

        }

    }

    return count; // return the count to the main funtion
}
