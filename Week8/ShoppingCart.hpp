/*********************************************************************
** Author: Robert Newton
** Date: 07/28/2016
** Description: ShoppingCart.hpp this is the header for the ShoppingCart program
this stores the list of items you want added, it will also determine the total
pricing of the items on the specified list.
*********************************************************************/

#ifndef SHOPPING_CART_HPP
#define SHOPPING_CART_HPP

#include <iostream>
#include "Item.hpp" // needed for listing the items


using namespace std;


#define MAXSIZE 100 //for our max 100 item pointer

/*********************************************************************
** Description: shopping cart class, set our public and private data members
pointer to item, default, addItem and the total are all initialized
**
*********************************************************************/
class ShoppingCart {
private:

    Item* itemList[MAXSIZE]; //pointer to item array setting
    int arrayEnd; // index of the next empty spot in the array

public:

    ShoppingCart(); //default
    void addItem(Item *); //this adds the item to the list
    double totalPrice(); // this calculates the total pricing of listed items

};


#endif
