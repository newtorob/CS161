/*********************************************************************
** Author:Robert Newton
** Date: 07/13/2016
** Description: Box.hpp - This program takes the length, width and height from
the user and returns the surface area and the volume of those numbers, this is
where we declare our data members for our cpp project
*********************************************************************/
#ifndef BOX_HPP
#define BOX_HPP

#include <iostream>

using namespace std;
/*********************************************************************
** Description: this is our class Box, it will define the data methods for all
 needed for the volume and surface area
**
*********************************************************************/
class Box

{

private:

     double length,width,height;

public:

  /*********************************************************************
  ** Description: here we define our functions
  **
  *********************************************************************/

     Box();

     Box(double length, double width, double height);

     void setLength(double l);//set our length

     void setWidth(double w);//set our width

     void setHeight(double h);//set our height

     double getVolume(); // we get the volume

     double getSurfaceArea();// get the surface area

};

#endif
