/*********************************************************************
** Author:Robert Newton
** Date: 07/13/2016
** Description: Box.cpp - This program takes the length, width and height from
the user and returns the surface area and the volume of those numbers
*********************************************************************/
#include <iostream>
#include <string>
#include "Box.hpp"


using namespace std;
/*********************************************************************
** Description: Default constructor, setting everything to 1 incase we
get no values
**
*********************************************************************/
Box::Box(){
     length=1;
     width=1;
     height=1;
}
/*********************************************************************
** Description: we set the different data members for height, width and length
**
*********************************************************************/
Box::Box(double l,double w, double h){
     setLength(l);
     setWidth(w);
     setHeight(h);
}
/*********************************************************************
** Description: we set the values using void functions
**
*********************************************************************/
void Box::setLength(double l){
     length=l;
}

void Box::setWidth(double w){
     width=w;
}

void Box::setHeight(double h){
     height=h;
}
/*********************************************************************
** Description: the volume is set using this formula
**
*********************************************************************/
double Box::getVolume(){
     return length*width*height;
}
/*********************************************************************
** Description: the surface area is created using this forumula
**
*********************************************************************/
double Box::getSurfaceArea(){
     return (2*length*width)+(2*width*height)+(2*length*height);
}

/*int main () {


    Box box1(2.4, 7.1, 5.0);
    Box box2;
    double volume1 = box1.getVolume();
    double surfaceArea1 = box1.getSurfaceArea();
    double volume2 = box2.getVolume();
    double surfaceArea2 = box2.getSurfaceArea();



    return 0;
}*/
