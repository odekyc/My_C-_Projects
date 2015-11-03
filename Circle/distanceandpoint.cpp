#include "distanceandpoint.h"
#include<sstream>


using namespace std;

Point::Point()
{
	//default constructor
}



Point::Point( const Point & source)
{
	m_x=source.m_x;
	m_y=source.m_y;       //copy constructor for Point

}

Point::Point(const double x, const double y)
{
	m_x=x;
	m_y=y;       
	// create a Point variable with two double parameters, first double as x-coordinate while second double as y-coordinate
}



Point::~Point()
{
	//destructor 
}

double Point::GetX()
{
	return m_x;
}

double Point::GetY()
{ 
	return m_y;         //get m_y as y-coordinate of Point
}





void Point::ToString() const 
{
std::stringstream ss;
ss << "Point(" << m_x << "," << m_y  << ")";      //use stringstream to create a string for Point variable fashioned after (x,y) format
std::string mystr=ss.str();

}




double Point:: Distance() const
{
	double result= pow(m_x,2) + pow( m_y, 2);      //find the distance between current point and origin

	return sqrt(result);
}

double Point:: Distance(const Point & p) const
{
	double xbetween= (p.m_x-m_x)*(p.m_x-m_x);
	double ybetween= (p.m_y-m_y)*(p.m_y-m_y);    //find the distance between current point and point p

	return sqrt( xbetween + ybetween);
}

double Point:: X(const double x) const
{
     
	  return x;                     // set and get the double number passed as the parameter as the x-coordinate
}

double Point:: Y(const double y) const
{
	
	return y;              // set and get the double number passed as the parameter as the y-coordinate
}


