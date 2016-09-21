/*********************************************************************
** Author: Robert Newton
** Date: 08/08/2016
** Description: Library.cpp, we construct the library, find the books and
the members, add the fine system and allow for checkouts, returns and
requests given the circumstances are correct.
*********************************************************************/

#include <iostream>
#include <vector>
#include <string>

#include "Library.hpp"

using namespace std;

/*********************************************************************
** Description: Constructs the library & sets current date to 0
*********************************************************************/ 
Library::Library() {
  currentDate = 0;
}


/*********************************************************************
** Description: adds book to the library holdings
*********************************************************************/ 
void Library::addBook(Book *b) {
  holdings.push_back(b);
}


/*********************************************************************
** Description: adds patron to the library members
*********************************************************************/ 
void Library::addPatron(Patron *pat) {
  members.push_back(pat);
}


/*********************************************************************
** Description: If the conditions are met for the patron to check out book
     allow to check out book, otherwise, do not check out
*********************************************************************/ 
string Library::checkOutBook(string pID, string bID) {
  Book *book = getBook(bID);        // Book needed
  Patron *patron = getPatron(pID);  // get patron info

  // if Book is not in holdings, do not check out
  if (!book) {
    return "Book not found";
  }

  // if Patron is not a member, do not check out
  if (!patron) {
    return "Patron not found";
  }

  // determine status of book
  Locale status = book->getLocation();

  if (status == CHECKED_OUT) {
    return "Book already checked out";
  }

  // if wanted book is on hold, do not check out
  if (status == ON_HOLD_SHELF) {
    if (book->getRequestedBy() != patron) {
      return "Book on hold by other patron";
    } else {
     // otherwise, allow checkout
      book->setRequestedBy(NULL);
    }
  }

  // update Books status 
  book->setCheckedOutBy(patron);
  book->setDateCheckedOut(currentDate);
  book->setLocation(CHECKED_OUT);

  // Add book to the list of books the patron has out
  patron->addBook(book);

  return "Check out successful";
}


/*********************************************************************
** Description: We allow the patron to return the book and return the
     correct response if the checkout was allowed or not
*********************************************************************/ 
string Library::returnBook(string bID) {
  Book *book = getBook(bID);  // Book to return

  // if book is not part of holdings, do not return
  if (!book) {
    return "Book not found";
  }

  // determine Book status
  Locale status = book->getLocation();

  // only return if it is currently checked out
  if (status != CHECKED_OUT) {
    return "Book already in library";
  }

  // figure out who is returning the Book
  Patron *patron = book->getCheckedOutBy();

  // remove it from their list of checked out Books
  patron->removeBook(book);

  // if it was requested by someone else, put it on the hold shelf
  
  if (book->getRequestedBy()) {
    book->setLocation(ON_HOLD_SHELF);
  } else {
      //else put it back on shelf

    book->setLocation(ON_SHELF);
  }
  
  // noone else has book
  book->setCheckedOutBy(NULL);

  return "Return successful";
}


/*********************************************************************
** Description:Allows request if the conditions are met, return the correct
    response depending on if book is in, if patron is member etc.
*********************************************************************/ 
string Library::requestBook(string pID, string bID) {
  Book *book = getBook(bID);        // Book desired
  Patron *patron = getPatron(pID);  // Patron seeking Book

  // if Book is not part of holdings, do not request
  if (!book) {
    return "Book not found";
  }

  // if Patron is not a member, do not request  
  if (!patron) {
    return "Patron not found";
  }

  // determine Book's status
  Locale status = book->getLocation();

  // if Book is on hold, check to see if it is by patron 
  if (status == ON_HOLD_SHELF) {
    if (book->getRequestedBy() != patron) {
      return "Book on hold by other patron";
    }
  }

  // put the book on hold if it wasn't already
  if (status == ON_SHELF) {
    book->setLocation(ON_HOLD_SHELF);
  }
  book->setRequestedBy(patron);

  return "Request successful";
}


/*********************************************************************
** Description: Patron can pay fine if the id is the same, and patron is
     member of the library
*********************************************************************/ 
// takes amount being paid
string Library::payFine(string pID, double payment) {
  Patron *patron = getPatron(pID);
  
  // if Patron is not a member, doesn't pay 
  if (!patron) {
    return "Patron not found";
  }

  patron->amendFine(-payment);

  return "Payment successful";
}


/*********************************************************************
** Description: Increments the date, adds 10 cents per
**              overdue book to every Patron debt.
*********************************************************************/ 
void Library::incrementCurrentDate() {
  // increment the date
  ++currentDate;
  
  // number of Books in the Library
  int numHoldings = holdings.size();

  // if the book is overdue, charge the Patron who has it checked out 10c

  for (int i = 0; i < numHoldings; i++) {
    Book *book = holdings.at(i);
    int checkOutLength = book->getCheckOutLength();

    int dateCheckedOut = book->getDateCheckedOut();
    int dueDate = dateCheckedOut + checkOutLength;

    int daysOverdue = currentDate - dueDate;

    if (daysOverdue > 0) {
      Patron *patron = book->getCheckedOutBy();
      if (patron != NULL) {
        patron->amendFine(0.10);
      }
    }
  }
}


/*********************************************************************
** Description: Returns the patron ID otherwise returns NULL
*********************************************************************/ 
Patron* Library::getPatron(string pID) {
  int numMembers = members.size();

  // search through members
  for (int i = 0; i < numMembers; i++) {
    string curID = members.at(i)->getIdNum();

    // check for equality 
    if (pID == curID) {
      return members.at(i);
    }
  }

  // given ID did not match a Patron member
  return NULL;
}


/*********************************************************************
** Description: Return the Book ID, otherwise returns NULL
*********************************************************************/ 
Book* Library::getBook(string bID) {
  int numHoldings = holdings.size();

  // search through the Books
  for (int i = 0; i < numHoldings; i++) {
    string curID = holdings.at(i)->getIdCode();

    // check for equality
    if (bID == curID) {
      return holdings.at(i);
    }
  }

  // given ID did not match Book in the holdings
  return NULL;
}
