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

Point:: Point(double xandyval): x(xandyval), y(xandyval)
{            // initialize both x and y to the value of the double arguement xandyval
	cout<<"used single arguement constructor for Point"<<endl;
}

Point::Point(double newx, double newy) : x(newx), y(newy)
{// Initialize using newx and newy
	
/*	x = newx;
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

bool Point::operator == (const Point& p) const
{
if (x==p.x && y==p.y)                          // use the bool variable to test whether current Point variable is the same in coordinate as Point p variable
return true;
else
return false;
}

ostream& operator << (ostream& os, const Point p) // Send to ostream
{
	stringstream s;
    os<<"("<<p.x<<","<<p.y<<")"<<endl;                                   // source code for the << operator
    return os;
}
