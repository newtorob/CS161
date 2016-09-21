/*********************************************************************
** Author: Robert Newton
** Date: 07/28/2016
** Description: Item.cpp, this is our item class function file, we use
this as well as the item.hpp to set and get the name, quantity and price.
*********************************************************************/

#include "Item.hpp"
#include <iostream>
using namespace std;

/*********************************************************************
** Description: The empty constructor for an item with an empty name,
a 0 quantity, and a price set to 0.0
**
*********************************************************************/
Item::Item() {
    setName("");
    setPrice(0.0);
    setQuantity(0);

}
/*********************************************************************
** Description: Three parameter object, name, price and quantity
**
*********************************************************************/
Item::Item(string itemName, double itemPrice, int itemQuantity) {
    setName(itemName);
    setPrice(itemPrice);
    setQuantity(itemQuantity);
}
/*********************************************************************
** Description: returns the item name
*********************************************************************/
string Item::getName() {

    return name;

    
}
/*********************************************************************
** Description: returns item price
**
*********************************************************************/
double Item::getPrice() {

    return price;

}
/*********************************************************************
** Description: returns the item quantity
**
*********************************************************************/

int Item::getQuantity() {

    return quantity;

}

/*********************************************************************
** Description: sets name from the given string
**
*********************************************************************/
void Item::setName(string itemName){
    name = itemName;

}
/*********************************************************************
** Description: sets the price from the give price
**
*********************************************************************/
void Item::setPrice(double itemPrice){

    price = itemPrice;

}
/*********************************************************************
** Description: sets the quantity from the given quantity
**
*********************************************************************/
void Item::setQuantity(int itemQuantity){

    quantity = itemQuantity;

}
