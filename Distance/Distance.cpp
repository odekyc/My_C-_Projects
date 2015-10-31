#include "Distance.hpp"
#include<sstream>
#include<cmath>

Point::Point()
{
}

Point::~Point()
{
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

double Point:: Distance(Point p)
{
	double xbetween= (p.m_x-m_x)*(p.m_x-m_x);
	double ybetween= (p.m_y-m_y)*(p.m_y-m_y);

	return sqrt( xbetween + ybetween);
}
