#include "DISTANCEANDPOINT.h"
#include<sstream>
#include<cmath>
#include<iostream>

using namespace std;

Point::Point()
{
	
}



Point::Point( const Point & source)
{
	m_x=source.m_x;
	m_y=source.m_y;

}

Point::Point(double x, double y)
{
	m_x=x;
	m_y=y;
	
}



Point::~Point()
{
	
}







void Point::ToString()
{
std::stringstream ss;
ss << "Point(" << X() << "," << Y()  << ")";
std::string mystr=ss.str();
cout << mystr << endl;
}

double Point:: Distance()
{
	double result= pow(m_x,2) + pow( m_y, 2);

	return sqrt(result);
}

double Point:: Distance(Point p)
{
	double xbetween= (p.m_x-m_x)*(p.m_x-m_x);
	double ybetween= (p.m_y-m_y)*(p.m_y-m_y);

	return sqrt( xbetween + ybetween);
}

double Point:: X()
{
	return m_x;
}

double Point:: Y()
{
	return m_y;
}
