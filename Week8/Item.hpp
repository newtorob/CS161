/*********************************************************************
** Author: Robert Newton
** Date: 07/28/2016
** Description: Item.hpp this is our header file for the item class,
each item will have a name, price and quanitity associated with it.
*********************************************************************/
#ifndef ITEM_HPP
#define ITEM_HPP

#include <string> 


using namespace std;
/*********************************************************************
** Description: class item sets our public and private class items, as well
as our accessors and mutators and our default for item.
**
*********************************************************************/
class Item {
private:
    string name; //item name
    double price; // price in US dollars per unit
    int quantity; //number of item

public:
  Item(); // default
    Item(string, double, int); // our name, price and quantity of the item

  //accessor methods
    string getName();
    double getPrice();
    int getQuantity();

  //mutator methods
    void setName(string);
    void setPrice(double);
    void setQuantity(int);


};

#endif
