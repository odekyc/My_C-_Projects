#include "Point.h"
#include <cmath>
#include <iostream>
#include<string>
#include<sstream>
using namespace std;

Point::Point() : x(0), y(0) // Colon syntax!!!!!!!!!!!!!!!!!
{// Default constructor
	cout<<"used default constructor for Point"<<endl;                            
//	x = y =0.0;
}

Point:: Point(double xandyval): x(xandyval), y(xandyval)
{            // initialize both x and y to the value of the double arguement xandyval
	cout<<"used single arguement constructor for Point"<<endl;
}

Point::Point(double newx, double newy) : x(newx), y(newy)
{// Initialize using newx and newy
	cout<<"used double arguements' constructor for Point"<<endl;
/*	x = newx;
	y = newy;*/
}
Point::~Point()
{// Destructor
	
	cout<<"used destructor for Point"<<endl;
	
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

Point& Point::operator = (const Point& source)
{
		if (this == &source)
			cout<<"Assignment operator member function is called!"<<endl;
		return *this;

	x = source.x;
	y = source.y;
	cout<<"Assignment operator member function is called!"<<endl;
	return *this;
	                

}

ostream& operator << (ostream& os, const Point p) // Send to ostream
{
	
    os<<"("<<p.x<<","<<p.y<<")"<<endl;                                   // source code for the << operator
    return os;
}
 