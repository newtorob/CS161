/*********************************************************************
** Author: Robert Newton
** Date: 07/17/2016
** Description: LineSegment.cpp this is where we find our slope and length
using the values from point
*********************************************************************/
#include "LineSegment.hpp" //needed for class values
#include <iostream>

using namespace std;

/*********************************************************************
** Description: we set the points of both values to be used in the program
**and other functions.
*********************************************************************/
LineSegment::LineSegment(Point p1, Point p2){
   setEnd1(p1);
   setEnd2(p2);
}
/*********************************************************************
** Description: void functions to set the 1st point of both x and y
** from setEnd1
*********************************************************************/
void LineSegment::setEnd1(Point p) {
  p1.setXCoord(p.getXCoord());
  p1.setYCoord(p.getYCoord());
}
/*********************************************************************
** Description: void functions to set the 2nd point of both x and y
** from setEnd2
*********************************************************************/
void LineSegment::setEnd2(Point p){
   p2.setXCoord(p.getXCoord());
   p2.setYCoord(p.getYCoord());
}
/*********************************************************************
** Description: we return the 1st point
**
*********************************************************************/
Point LineSegment::getEnd1(){
  return p1;
}
/*********************************************************************
** Description: we return the 2nd point
**
*********************************************************************/
Point LineSegment::getEnd2(){
  return p2;
}
/*********************************************************************
** Description: Using the distanceTo formula to find out what our
length value is from p1 to p2
**
*********************************************************************/
double LineSegment::length() {
  return p1.distanceTo(p2);
}
/*********************************************************************
** Description:formula to find what the slope is, y2 -y1/x2-x1
**
*********************************************************************/
double LineSegment::slope() {
  return (p2.getYCoord()-p1.getXCoord())/(p2.getXCoord() - p1.getXCoord());
}
