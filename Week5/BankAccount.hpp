/*********************************************************************
** Author: Robert Newton
** Date: 07/13/2016
** Description: BankAccount.hpp - This is our header file, we use this to
define our BankAccount class, as well as all the public and private data
members
*********************************************************************/

#ifndef BANKACCOUNT_HPP

#define BANKACCOUNT_HPP

#include <iostream>

#include <string>

using namespace std;

/*********************************************************************
** Description: This is our BankAccount class
** we use this to set our private and public data members
*********************************************************************/

class BankAccount {

private:
// these are the private members
    string customerName, customerID;

    double customerBalance;



public:
//the public members, which can be accessed anywhere
    BankAccount(string,string,double);

    string getCustomerName(); //we get the cust name

    string getCustomerID(); // we get the ID

    double getCustomerBalance (); //we get the balance

    void withdraw (double); //the withdraw

    void deposit (double); //the deposit



};

#endif
