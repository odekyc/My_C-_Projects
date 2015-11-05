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
double Point:: Distance(Point&p2)             // find the distance between the current point and the point passed in the arguement
{
	double tempx= x-p2.x;             // find the distance between the x coordinates of the two points
	double tempy=y-p2.y;           //find the distance between the y coordinates of the two points

	double resultx= pow(tempx, 2);       // square the distance between the x coordinates of the two points
	double resulty= pow(tempy, 2);        // square the distance between the y coordinates of the two points

	return sqrt( resultx+resulty);              //find the squareroom of the sum of result x and result y

}
ostream& operator << (ostream& os, const Point& p) // Send to ostream
{
	
	os<<"("<<p.x <<","<<p.y<<")\n";                                           // source code for the << operator
    
    return os;

}

