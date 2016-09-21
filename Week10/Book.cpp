/*********************************************************************
** Author: Robert Newton
** Date: 08/08/2016
** Description: Book.cpp, is essential for creating all the instances of the
book being checked out, who it is checked out by, author, title and idcode
*********************************************************************/

#include "Book.hpp"
#include <iostream>
#include <string>

using namespace std;


/*********************************************************************
** Description: Book is given an idcode, title, and 
**              author name.
*********************************************************************/ 
Book::Book(string idc, string t, string a) {
    idCode = idc;
    title = t;
    author = a;

    //book starts out neither checked out/requested by patron
    setLocation(ON_SHELF);
    setCheckedOutBy(NULL);
    setRequestedBy(NULL);
    setDateCheckedOut(0);
}

/*********************************************************************
** Description: returns the max days the book can be checked out by
      patron
*********************************************************************/ 
int Book::getCheckOutLength() {
    return CHECK_OUT_LENGTH;
}
/*********************************************************************
** Description: Returns the title of the book
*********************************************************************/ 
string Book::getTitle(){
    return title;
}
/*********************************************************************
** Description: Returns the idcode of the book
*********************************************************************/ 
string Book::getIdCode() {
    return idCode;
}
/*********************************************************************
** Description: Returns the author of the book
*********************************************************************/ 
string Book::getAuthor() {
    return author;
}
/*********************************************************************
** Description: Returns either ON_SHELF, ON_HOLD_SHELF, or CHECKED_OUT
**            which depends on location of book
*********************************************************************/ 
Locale Book::getLocation() {
    return location;
}
/*********************************************************************
** Description: Updates the current status of this book
      depending on location
*********************************************************************/ 
void Book::setLocation(Locale loc) {
    location = loc;
}
/*********************************************************************
** Description: Returns the patron currently checking out this book
**              returns NULL if book is not out
*********************************************************************/ 
Patron* Book::getCheckedOutBy() {
    return checkedOutBy;
}
/*********************************************************************
** Description: Updates patron checking out the book using a pointer
*********************************************************************/ 
void Book::setCheckedOutBy(Patron *pat) {
    checkedOutBy = pat;
}

/*********************************************************************
** Description: Returns a pointer to who is requesting it, returns null if
     not requested
*********************************************************************/ 
Patron* Book::getRequestedBy() {
    return requestedBy;
}

/*********************************************************************
** Description: Updates using pointer the patron requesting the book
*********************************************************************/ 
void Book::setRequestedBy(Patron *pat) {
    requestedBy = pat;
}


/*********************************************************************
** Description: Returns the date the date the book was checked out
*********************************************************************/ 
int Book::getDateCheckedOut() {
    return dateCheckedOut;
}

/*********************************************************************
** Description: Updates the date the book was checked out
*********************************************************************/ 
void Book::setDateCheckedOut(int date) {
    dateCheckedOut = date;
}
