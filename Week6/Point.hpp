/*********************************************************************
** Author: Robert Newton
** Date: 07/17/2016
** Description: Point.hpp this is where we set our Point data members
and define our class
*********************************************************************/
#include <iostream>

#ifndef POINT_HPP
#define POINT_HPP
//define point to be used elsewhere



class Point {
private:
  double x, y; //x and y points

public:

  Point(); // default
  Point (double xValue, double yValue);//values for both points

  void setXCoord(double x);
  void setYCoord(double y);
  //setting the x and y coordinates
  double getXCoord();
  double getYCoord();
  //getting the x and y coordinates
  double distanceTo(const Point &p);//the constanst value for the distance to 



};
#endif
