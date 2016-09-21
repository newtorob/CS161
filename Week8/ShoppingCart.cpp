/*********************************************************************
** Author: Robert Newton
** Date: 07/28/2016
** Description: ShoppingCart.cpp, contains the shopping cart function, we will use this to add the items to the list and calculate the total pricing of
our cart
*********************************************************************/

#include "Item.hpp"
#include "ShoppingCart.hpp"
#include <iostream>

using namespace std;
/*********************************************************************
** Description: constructs an NULL emprty shopping cart with no items
**
*********************************************************************/
ShoppingCart::ShoppingCart() {
    Item** point;

    for (point = itemList; point < itemList + MAXSIZE; point++) {
        *point = NULL;

    }
    arrayEnd = 0;

}
/*********************************************************************
** Description: This adds the pointer-to-item, but doesn't do anything
if the cart is completely full
**
*********************************************************************/
void ShoppingCart::addItem(Item *item) {

    if (arrayEnd < MAXSIZE) {
        itemList[arrayEnd++]= item;
    }
}
/*********************************************************************
** Description: calculates then returns the total price of the items
in the shopping cart
**
*********************************************************************/
double ShoppingCart::totalPrice() {
    Item** item;
    double total= 0.0;


    for (item = itemList; item < itemList + arrayEnd; item++) {
        Item currentItem = **item;
        total += currentItem.getPrice() * currentItem.getQuantity();
    }
    return total;
}
