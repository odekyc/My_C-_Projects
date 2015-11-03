#include"Circle.h"
#include <iostream>
#include<string>
#include<sstream>
using namespace std;

Circle::Circle()
{
}   //default constructor

Circle::Circle( double tempradius)
{
	m_radius=tempradius;                                 //  use double radius passed in parameter to derive other private variables
	diameter= 2*m_radius;
	area= 3.141592653589793238463* pow(m_radius, 2);
	circumference= 3.141592653589793238463*m_radius*2;
}
Circle::~Circle()
{        //destructor
}
Point Circle::CentralPoint(Point&source)
{
	centralpoint=source;
	// use Point variable sent in the parameter as central point
	return centralpoint;
}

double Circle::Radius(double tempradius)
{
	m_radius=tempradius;
	 //use double number passed as parameter and set it as the radius of the Circle variable
	return m_radius;
}

double Circle::Radius()
{
	//getter of the radius
	return m_radius;
}
double Circle::Diameter()
{
	diameter= 2*m_radius;             //setter and getter of diameter
	return diameter;
}

double Circle::Area()
{
	area= 3.141592653589793238463* pow(m_radius, 2);    //setter and getter of area
	return area;
}

double Circle:: Circumference()
{
	circumference= 3.141592653589793238463*m_radius*2;        //setter and getter of circumference
	return circumference;
}


string Circle::ToString()
{
	stringstream sn;
	sn<<"Central Point coordinates : \nx-coordinate : "<< centralpoint.X() <<" y-coordinates : "<<centralpoint.Y()<<"\n"<<"Radius : "<<m_radius<<"\n"<<"Diameter : "<<diameter<<"\nArea : "<<area<<"\ncircumference : "<<circumference;

     string mystr=sn.str();        //use stringstream to create a string for the current Circle object
	 return mystr;

}

ostream& operator << (ostream& os,  Circle p) // Send to ostream
{
	
	os << p.ToString()<<endl;
	return os;
}