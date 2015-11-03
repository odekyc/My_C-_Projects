#include "Point.h"
#include<cmath>
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
double Point:: Distance(Point&p2)
{
	double tempx= x-p2.x;
	double tempy=y-p2.y;
	                                             //find the distance between the current point and point p2
	double resultx= pow(tempx, 2);
	double resulty= pow(tempy, 2);

	return sqrt( resultx+resulty);

}
ostream& operator << (ostream& os, const Point& p) // Send to ostream
{
	
	os<<"("<<p.x <<","<<p.y<<")\n";                                           // source code for the << operator
    
    return os;

}

