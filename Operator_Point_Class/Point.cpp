f#include "Point.h"
#include<sstream>
#include<cmath>

Point::Point()
{//default constructor for Point variable
}

Point::~Point()
{//destructor
}
Point::Point(double x,double y)
{
	m_x=x;    //constructor with two double parameters, first set as x-coordinate, second as y-coordinate
	m_y=y;
}

// Get the x value
double Point::GetX()
{
return m_x;
}
// Get the y value
double Point::GetY()
{
return m_y;
}



// Set the x value
void Point::SetX(double newxval)
{
m_x = newxval;
}
// Set the y value
void Point::SetY(double newyval)
{
m_y = newyval;
}


void Point::ToString()
{
std::stringstream ss;
ss << "Point(" << GetX() << "," << GetY() << ")";    //creates a string using stringstream in the fashion (x,y)
std::string mystr=ss.str();
cout << mystr << endl;
}

double Point:: DistanceOrigin()   //find the distance between origin and current point
{
	double result= pow(m_x,2) + pow( m_y, 2);

	return sqrt(result);
}

double Point:: Distance(Point p)     //find the distance between current point and point p
{
	double xbetween= (p.m_x-m_x)*(p.m_x-m_x);
	double ybetween= (p.m_y-m_y)*(p.m_y-m_y);

	return sqrt( xbetween + ybetween);
}
Point Point :: operator -() const; // Negate the coordinates.
{ // the additive inverse of current point
	return Point( - valuex, - valuey);
}

Point Point :: operator * (double factor) const; // Scale the coordinates.
{     
	   return Point( factor* valuex, factor*value y);    //return the double scaled coordinates

}

Point Point::operator + (const Point& p) const; // Add coordinates.
{   
	Point result;
	result.m_x = m_x + p.m_x;           //declare a Point variable named result and assign the x and y coordinate of result the
	                                  // end result of the x coordinate of Point variable p added to existing x coordinate, do
	result.m_y =m_y + p.m_y;           //like wise for y coordinate
	 
	return result;
}

bool Point ::operator == (const Point& p) const; // Equally compare operator.
{           if(this== &p)
	{                  // return bool value 1 if the current Point variable is equal to Point variable p, else return 0
		return 1;}
            else
			{

				return 0;}
}     
Point& Point :: operator = (const Point& source); // Assignment operator.
{ 
	if (this == &source)
		return *this;

	m_x = source.m_x;
	m_y = source.m_y;

	return *this;
	                
}
Point& Point :: operator *=(double factor); // Scale the coordinates & assign by the factor user enteres. 
{
		Point tmp = (*this) * factor;        //create an temporary Point variable named temp and assign it the value of the current Point coordinates multiplied by the user input factor 
	    *this = tmp;

	    return *this;
}