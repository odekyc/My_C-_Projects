
#include"Circle.h"


Circle::Circle() : Shape()
{
}     //default constructor

Circle::Circle( Circle & source) : Shape()       //copy constructor with a Circle parameter
{
		m_radius=source.m_radius;
	centralpoint=source.centralpoint;
     diameter=source.diameter;
	area=source.area;
	circumference=source.circumference;
}

Circle::Circle(double tempradius)
{                                        //constructor with a double radius as parameter and derives the values of all the other private variables from this parameter
	m_radius=tempradius;
	diameter= 2*tempradius;
	area= 3.141592653589793238463* pow(tempradius, 2);
	circumference= 3.141592653589793238463*tempradius*2;

}
Circle::~Circle()
{            //destructor
}
Point Circle::CentralPoint(Point&source)
{
	centralpoint=source;             // using the Point variable passed as parameter and set it as the central point of the circle variable

	return centralpoint;
}


string Circle::ToString()
{
	stringstream sn;
	sn<<"Radius : "<<m_radius<<"\n"<<"Diameter : "<<diameter<<"\nArea : "<<area<<"\ncircumference : "<<circumference;

     string mystr=sn.str();        // create a string for the properties of the current Circle variable
	 return mystr;

}

void Circle::operator = (const Circle& source)
{
	Shape::operator = (source);           //assignment operator for a Circle variable named source to the current Circle variable
	                

}