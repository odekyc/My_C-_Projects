

#include"Circle.h"


Circle::Circle() : m_radius(0.0), diameter(0.0), area(0.0), circumference( 0.0)
{
}      //default constructor using colon syntax

Circle::Circle( double tempradius) : m_radius(tempradius), diameter(2*m_radius), area(3.141592653589793238463* pow(m_radius, 2)), circumference( 3.141592653589793238463*m_radius*2)
{
	   //constructor with one double number parameter as radius using colon syntax
}
Circle::~Circle()
{
}
Point Circle::CentralPoint(Point&source)
{
	centralpoint=source;          //sets and gets the Point variable passed as parameter as the centralpoint of the circle

	return centralpoint;
}

double Circle::Radius(double tempradius)
{
	m_radius=tempradius;        //setter and getter of radius using the double number passed as the parameter
	 
	return m_radius;
}

double Circle::Diameter()
{
	diameter= 2*m_radius;      //getter of diameter
	return diameter;
}

double Circle::Area()
{
	area= 3.141592653589793238463* pow(m_radius, 2);       //getter of area
	return area;
}

double Circle:: Circumference()
{
	circumference= 3.141592653589793238463*m_radius*2;           //getter of circumference
	return circumference;
}


string Circle::ToString()
{
	stringstream sn;
	sn<<"Central Point coordinates : \nx-coordinate : "<< centralpoint.X() <<" y-coordinates : "<<centralpoint.Y()<<"\n"<<"Radius : "<<m_radius<<"\n"<<"Diameter : "<<diameter<<"\nArea : "<<area<<"\ncircumference : "<<circumference;

     string mystr=sn.str();
	 return mystr;             //create a string using stringstream for our current circle variable's properties

}