#include "DISTANCEANDPOINT.h"
#include<sstream>
#include<cmath>
#include<iostream>
#include<string>

using namespace std;

Point::Point()
{
	//default constructor
}



Point::Point( const Point & source)
{
	m_x=source.m_x;
	m_y=source.m_y;     //copy constructor

}

Point::Point(const double x, const double y)
{
	m_x=x;
	m_y=y;      //create a point from two double parameters, one is set as x-coordinate, another is y-coordinate
	
}



Point::~Point()
{
	//destructor
}






void Point::ToString() const 
{
std::stringstream ss;
ss << "Point(" << m_x << "," << m_y  << ")";         //use stringstream to create a fashion a string for a point in the (X,Y) form
std::string mystr=ss.str();
cout << mystr << endl;
}




double Point:: Distance() const
{
	double result= pow(m_x,2) + pow( m_y, 2);      //find the distance of current point's x and y coordinates to the origin

	return sqrt(result);
}

double Point:: Distance(const Point & p) const
{
	double xbetween= (p.m_x-m_x)*(p.m_x-m_x);
	double ybetween= (p.m_y-m_y)*(p.m_y-m_y);         //find distance between two points(current point and point p)

	return sqrt( xbetween + ybetween);
}

double Point:: X(const double x) const
{
     
	  return x;             //const function that gets the x-coordinate of a point
}

double Point:: Y(const double y) const
{
	
	return y;          //const function that gets the y-coordinate of a point
}


