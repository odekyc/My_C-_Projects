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
	m_y=source.m_y;           //  copy constructor for Point variable

}

Point::Point(const double x, const double y)
{
	m_x=x;       //constructor for Point variable using the two double numbers passed as parameters as x-coordinate and y-coordinate
	m_y=y;               
	
}



Point::~Point()
{
	 //destructor
}

double Point::GetX()
{
	return m_x;       //get x-coordinate
}

double Point::GetY()
{ 
	return m_y;     //get y-coordinate
}





void Point::ToString() const 
{
std::stringstream ss;
ss << "Point(" << m_x << "," << m_y  << ")";
std::string mystr=ss.str();                              //use stringstream to create a string for the current Point variable in (x,y) format
cout << mystr << endl;
}




double Point:: Distance() const
{
	double result= pow(m_x,2) + pow( m_y, 2);
	                                                  //find the distance between current Point and origin
	return sqrt(result);
}

double Point:: Distance(const Point & p) const
{
	double xbetween= (p.m_x-m_x)*(p.m_x-m_x);
	double ybetween= (p.m_y-m_y)*(p.m_y-m_y);        //find the distance between current Point and Point p

	return sqrt( xbetween + ybetween);
}

double Point:: X(const double x) const
{
     
	  return x;         //sets the double number passed in the parameter as X-coordinate
}

double Point:: Y(const double y) const
{
	
	return y;          //sets the double number passed in the parameter as Y-coordinate
}


