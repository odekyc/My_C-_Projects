

#include"Circle.h"


Circle::Circle()
{     //default constructor
}

Circle::Circle( double tempradius)
{
	m_radius=tempradius;                                         //constructor for Circle variable with radius passed as parameter, derive all other private variables from radius
	diameter= 2*m_radius;
	area= 3.141592653589793238463* pow(m_radius, 2);
	circumference= 3.141592653589793238463*m_radius*2;
}
Circle::~Circle()
{
}   //destructor
Point Circle::CentralPoint(Point&source)
{
	centralpoint=source;
	                             //set the Point variable passed as the parameter as the central point of the current circle
	return centralpoint;
}

double Circle::Radius(double tempradius)
{
	m_radius=tempradius;
	                          //set the double number passed as the parameter as the radius of the current circle variable
	return m_radius;
}

double Circle::Diameter()
{
	diameter= 2*m_radius;     //getter of diameter
	return diameter;
}

double Circle::Area()
{
	area= 3.141592653589793238463* pow(m_radius, 2);    //getter of area
	return area;
}

double Circle:: Circumference()
{
	circumference= 3.141592653589793238463*m_radius*2;      //getter of circumference
	return circumference;
}


string Circle::ToString()
{
	stringstream sn;
	sn<<"Central Point coordinates : \nx-coordinate : "<< centralpoint.GetX() <<" y-coordinates : "<<centralpoint.GetY()<<"\n"<<"Radius : "<<m_radius<<"\n"<<"Diameter : "<<diameter<<"\nArea : "<<area<<"\ncircumference : "<<circumference;

     string mystr=sn.str();
	 return mystr;

}  //creates a string using strinstream for the current Circle variable