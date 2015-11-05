
#include"Circle.h"


Circle::Circle() : Shape()
{                // default constructor 
}        

Circle::Circle( Circle & source) : Shape()
{                                                    //copy constructor
		m_radius=source.m_radius;
	centralpoint=source.centralpoint;
     diameter=source.diameter;
	area=source.area;
	circumference=source.circumference;
}

Circle::Circle(double tempradius)         //constructor with a double radius parameter and derives the values of other private variables from this radius 
{
	m_radius=tempradius;
	diameter= 2*tempradius;
	area= 3.141592653589793238463* pow(tempradius, 2);
	circumference= 3.141592653589793238463*tempradius*2;

}
Circle::~Circle()
{
}    //destructor
Point Circle::CentralPoint(Point&source)
{
	centralpoint=source;             //use the Point variable source passed in the parameter and set it as centralpoint

	return centralpoint;
}


string Circle::ToString()
{
	stringstream sn;
	sn<<"Radius : "<<m_radius<<"\n"<<"Diameter : "<<diameter<<"\nArea : "<<area<<"\ncircumference : "<<circumference;

     string mystr=sn.str();
	 return mystr;                 //creates a string for the properties of the current Circle variable

}

void Circle::operator = (const Circle& source)
{
	Shape::operator = (source);
	                                 //assignment operator for Circle variable

}



ostream& operator << (ostream& os, Circle c) // Send to ostream
{

	os << c.ToString() << endl;                      // source code for the << operator
	return os;
}
