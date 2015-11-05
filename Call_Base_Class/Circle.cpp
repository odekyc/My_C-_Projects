
#include"Circle.h"


Circle::Circle() : Shape()
{      //default constructor
}

Circle::Circle( Circle & source) : Shape()     //copy constructor 
{
		m_radius=source.m_radius;
	centralpoint=source.centralpoint;
     diameter=source.diameter;
	area=source.area;
	circumference=source.circumference;
}

Circle::Circle(double tempradius)     //constructor with radius passed as the parameter
{
	m_radius=tempradius;
	diameter= 2*tempradius;
	area= 3.141592653589793238463* pow(tempradius, 2);
	circumference= 3.141592653589793238463*tempradius*2;

}
Circle::~Circle()
{    //default constructor
}
Point Circle::CentralPoint(Point&source)        //use Point source variable passed in the parameter and set it as the central point of the current Circle variable
{
	centralpoint=source;

	return centralpoint;
}


string Circle::ToString()
{
	stringstream sn;
	sn<<"Radius : "<<m_radius<<"\n"<<"Diameter : "<<diameter<<"\nArea : "<<area<<"\ncircumference : "<<circumference;

     string mystr=sn.str();
	 string s=Shape::ToString();          //create a string for the properties of the current Circle variable
	 mystr+=s;
	 return mystr;

}

Circle& Circle::operator = (const Circle& source)       //assignment operator for the Circle variable
{
	Shape::operator = (source);
	if (this == &source)
		
		return *this;


		else

    m_radius=source.m_radius;
	diameter=source.diameter;
	centralpoint=source.centralpoint;
	area=source.area;
	circumference=source.circumference;

	return *this;
	                

}