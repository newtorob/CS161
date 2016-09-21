/*********************************************************************
** Author: Robert Newton
** Date: 07/17/2016
** Description:  Point.cpp this is where we find set our values for both points
and we find the distanceTo values
*********************************************************************/
#include "Point.hpp"
#include <iostream>
#include <cmath> //needed for sqrt and pow

using namespace std;
/*********************************************************************
** Description:
**                  default constructor setting to 0
*********************************************************************/
Point::Point() {
    setXCoord(0);
    setYCoord(0);
}
/*********************************************************************
** Description: here we initialize the xValue and yValue  data memebers
**and set them.
*********************************************************************/
Point::Point(double xValue, double yValue){
    setXCoord(xValue);
    setYCoord(yValue);
}
/*********************************************************************
** Description: we initialize x for xValue
**
*********************************************************************/
void Point::setXCoord(double xValue){
    x = xValue;
}
/*********************************************************************
** Description:we initialize y for yValue
**
*********************************************************************/
void Point::setYCoord(double yValue){
    y = yValue;
}
/*********************************************************************
** Description: we return the x coordinate
**
*********************************************************************/
double Point::getXCoord(){
    return x;
}
/*********************************************************************
** Description: we return the YCoordinate
**
*********************************************************************/
double Point::getYCoord(){
    return y;
}
/*********************************************************************
** Description: our distance to formula
** sqrt(x2-x1)^2 + (y2-y1)^2
*********************************************************************/
double Point::distanceTo(const Point &p){
    return sqrt(pow((x-p.x),2) + pow((y-p.y),2));
}
