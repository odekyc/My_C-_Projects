#include "Point.h"
#include"Line.h"

#include <cmath>
#include <iostream>
#include<string>
#include<sstream>
using namespace std;

Point::Point(): x(0), y(0)  // Colon syntax!!!!!!!!!!!!!!!!!
{// Default constructor
	
}

Point::Point(double newx, double newy): x(newx), y(newy)
{// Initialize using newx and newy
	
 /*   x = newx;            
	y = newy;*/
}
Point::~Point()
{// Des...
	
}

double Point::X() const
{
	return x;                      // return the private object x
}

void Point::X(double newX)
{ 
	x = newX;                       //  if a double arguement, set the private object x to the value of the arguement
}


double Point::Y() const 
{
	return y;                                // return the private object y 
}

void Point::Y(double newY)                   //  if a double arguement, set the private object y to the value of the arguement
{ 
	y = newY;
}
string Point::ToString()
{
stringstream ss;
ss  << "("<<x<<"," << y <<")" ;                 // create a string using the the format of this line of code
string mystr=ss.str();

return mystr;
}

ostream& operator << (ostream& os, const Point& p) // Send to ostream
{
	
	os<<"("<<p.x <<","<<p.y<<")\n";                                           // source code for the << operator
    
    return os;

}

ostream& operator << (ostream& os, const Line& p) // Send to ostream
{
	os<<"("<<p.startPoint.x<<","<<p.startPoint.y<<")\n";                                           // source code for the << operator
    
    return os;
}