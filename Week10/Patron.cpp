/*********************************************************************
** Author: Robert Newton
** Date: 08/08/2016
** Description:  Patron.cpp, this program sets the idnum name and initializes
the amount the patron currently owes in fines. it allows us to also, add and
remove books the patorn currently has.
*********************************************************************/

#include "Patron.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*********************************************************************
** Description: Constructs a Patron with idNumber and name
*********************************************************************/ 
Patron::Patron(string idn, string n) {
  idNum = idn;
  name = n;
  fineAmount = 0.0;  

 
}


/*********************************************************************
** Description: Returns the patron id number
*********************************************************************/ 
string Patron::getIdNum() {
  return idNum;
}


/*********************************************************************
** Description: Returns the patron name
*********************************************************************/ 
string Patron::getName() {
  return name;
}


/*********************************************************************
** Description: returns the books the patron has out currently
*********************************************************************/ 
vector<Book*> Patron::getCheckedOutBooks() {
  return checkedOutBooks;
}


/*********************************************************************
** Description: Adds the Book to the list of this
**              Patron's checked out books. 
*********************************************************************/ 
void Patron::addBook(Book *b) {
  checkedOutBooks.push_back(b);
}


/*********************************************************************
** Description: Removes the book from the list of books checked out
**              by the patron
*********************************************************************/ 
void Patron::removeBook(Book *b) {
  
    int numCheckedOutBooks = checkedOutBooks.size(); //length of list

  // search for the book in the list of checked out books and remove it when found
 
  for (int i = 0; i < numCheckedOutBooks; i++) {
    Book *currentBook = checkedOutBooks.at(i);
    if (b == currentBook) {
      checkedOutBooks.erase(checkedOutBooks.begin() + i);
      return;
    }
  }
}


/*********************************************************************
** Description: Returns the current amount in fines the patron owes
*********************************************************************/ 
double Patron::getFineAmount() {
  return fineAmount;
}


/*********************************************************************
** Description: Adds the given amount to the fine amount the patron owes
*********************************************************************/ 
void Patron::amendFine(double amount) {
  fineAmount += amount;
}
