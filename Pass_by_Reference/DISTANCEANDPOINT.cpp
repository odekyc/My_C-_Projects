#include "DISTANCEANDPOINT.h"
#include<sstream>
#include<cmath>
#include<iostream>

using namespace std;

Point::Point()
{
	cout<<"The constructor is called"<<endl;
}



Point::Point(const Point& source)
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
	cout<<"The destructor is called"<<endl;
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
ss << "Point(" << GetX() << "," << GetY() << ")";
std::string mystr=ss.str();
cout << mystr << endl;
}

double Point:: DistanceOrigin()
{
	double result= pow(m_x,2) + pow( m_y, 2);

	return sqrt(result);
}

double Point:: Distance (const Point& p)
{
	double xbetween= (p.m_x-m_x)*(p.m_x-m_x);
	double ybetween= (p.m_y-m_y)*(p.m_y-m_y);

	return sqrt( xbetween + ybetween);
}
