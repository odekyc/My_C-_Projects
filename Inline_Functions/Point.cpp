#include "Point.h"
#include<sstream>
#include<cmath>

Point::Point()
{           //default constructor
}

Point::~Point()
{        //destructor
}







void Point::ToString()
{
std::stringstream ss;
ss << "Point(" << GetX() << "," << GetY() << ")";    //creates a string using stringstream for the current Point variable in the (x,y) fashion
std::string mystr=ss.str();
cout << mystr << endl;
}

double Point:: DistanceOrigin()
{
	double result= pow(m_x,2) + pow( m_y, 2);        //find the distance between current point variable and origin

	return sqrt(result);
}

double Point:: Distance(Point p)
{
	double xbetween= (p.m_x-m_x)*(p.m_x-m_x);
	double ybetween= (p.m_y-m_y)*(p.m_y-m_y);      //find the distance between current point variable and Point p

	return sqrt( xbetween + ybetween);
}
