
#include"Circle.h"


Circle::Circle() : Shape()       //default constructor for Circle
{
	cout<<"default Circle constructor is called"<<endl;
}

Circle::Circle( Circle & source) : Shape()
{                                                  //copy constructor for Circle
		m_radius=source.m_radius;
	centralpoint=source.centralpoint;
     diameter=source.diameter;
	area=source.area;
	circumference=source.circumference;
}

Circle::Circle(double tempradius)         //constructor for Circle with radius as parameter and derive all other private variables' values from radius parameter
{
	m_radius=tempradius;
	diameter= 2*tempradius;
	area= 3.141592653589793238463* pow(tempradius, 2);
	circumference= 3.141592653589793238463*tempradius*2;

}
Circle::~Circle()
{//destructor
	
}
Point Circle::CentralPoint(Point&source)        //sets the Point source variable passed in parameter as the centralpoint of the current Circle variable
{
	centralpoint=source;

	return centralpoint;
}


string Circle::ToString()
{                              //creates a string for a Circle variable for the properties of the current Circle variable
	stringstream sn;
	sn<<"Radius : "<<m_radius<<"\n"<<"Diameter : "<<diameter<<"\nArea : "<<area<<"\ncircumference : "<<circumference;

     string mystr=sn.str();
	 string s=Shape::ToString();
	 mystr+=s;
	 return mystr;

}

Circle& Circle::operator = (const Circle& source)
{
	Shape::operator = (source);              //assignment operator for the Circle variable
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