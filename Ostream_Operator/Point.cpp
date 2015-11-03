#include "Point.h"
#include <cmath>
#include <iostream>
#include<string>
#include<sstream>
using namespace std;

Point::Point() : x(0), y(0) // Colon syntax!!!!!!!!!!!!!!!!!
{// Default constructor
	                            
//	x = y =0.0;
}

Point::Point(double newx, double newy) : x(newx), y(newy)
{// Initialize using newx and newy
	
/*	x = newx;
	y = newy;*/
}
Point::~Point()
{// Des...
	
	cout << "bye my point..\n";
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

ostream& operator << (ostream& os, Point p) // Send to ostream
{
	
   
	os << "(" << p.X() << "," << p.Y()<<")" << endl;                                 // source code for the << operator
    return os;
}
