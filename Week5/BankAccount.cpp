/*********************************************************************
** Author: Robert Newton
** Date: 07/13/2016
** Description: BankAccount.cpp - This program will allow the user to input their
  name, bank id, and amount that is in their bank, then we will give the customer
  the choice of depositing or withdrawing from their starting balance
*********************************************************************/


#include "BankAccount.hpp"
#include <iostream>
#include <string>

using namespace std;


/*********************************************************************
** Description: This is our initializer, we use it for the name, ID, and balance
**
*********************************************************************/
BankAccount::BankAccount(string name, string ID, double balance){

    customerName = name;

    customerID = ID;

    customerBalance = balance;

}
/*********************************************************************
** Description: Here we get the customer name from the user
**
*********************************************************************/

string BankAccount::getCustomerName() {

    return customerName;

}
/*********************************************************************
** Description:Here we get the customerID from the user
**
*********************************************************************/

string BankAccount::getCustomerID() {

    return customerID;

}
/*********************************************************************
** Description:Here we get the balance from the user
**
*********************************************************************/

double BankAccount::getCustomerBalance(){

    return customerBalance;

}
/*********************************************************************
** Description: this subtracts the balance for a withdraw
**
*********************************************************************/

void BankAccount::withdraw(double amount){

    customerBalance = customerBalance - amount;


}
/*********************************************************************
** Description: this adds to the balance for a deposit
**
*********************************************************************/

void BankAccount::deposit(double amount){

    customerBalance = customerBalance + amount;

}

/*
int main () {
  BankAccount account1("Harry Potter", "K4637", 8032.78);
  account1.withdraw(244.0);
  account1.withdraw(3012.58);
  account1.deposit(37.54);
  account1.withdraw(1807.12);
  account1.deposit(500.00);
  double finalBalance = account1.getCustomerBalance();


  cout << finalBalance;
return 0;

} */
