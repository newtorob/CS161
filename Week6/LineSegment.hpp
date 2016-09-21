/*********************************************************************
** Author: Robert Newton
** Date: 07/17/2016
** Description: LineSegment.hpp this is our header file to set the
different data members.
*********************************************************************/
#include "Point.hpp" //needed for the access to the points
#include <iostream>

using namespace std;

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
//we define LineSegment for use elsewhere

class LineSegment {
  //our point data members
private:
  Point p1;
  Point p2;

public:
  LineSegment();
  LineSegment(Point p1, Point p2);
  void setEnd1(Point p);
  void setEnd2(Point p);
  //set the end of both points
  Point getEnd1();
  Point getEnd2();
  //get the end for both points
  double length();
  //length value
  double slope();
  //slope value
};



#endif
