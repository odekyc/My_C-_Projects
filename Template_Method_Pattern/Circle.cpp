
#include"Circle.h"


Circle::Circle() : Shape()              // the default constructor of the Circle derived class
{
}

Circle::Circle( Circle & source) : Shape()                  // the copy constructor of the Circle derived class
{
		m_radius=source.m_radius;
	centralpoint=source.centralpoint;
     diameter=source.diameter;                        // assign the private data members of the Circle variable passed as arguement to that of the current Circle variable
	area=source.area;
	circumference=source.circumference;
}

Circle::Circle(double tempradius)
{
	m_radius=tempradius;                         // constructor for a Circle using the double number passed as the arguement as the radius to calculate the values of other private data members such as diameter, area, and circumference
	diameter= 2*tempradius;
	area= 3.141592653589793238463* pow(tempradius, 2);
	circumference= 3.141592653589793238463*tempradius*2;

}
Circle::~Circle()                 //destructor for Circle derived class
{
}
Point Circle::CentralPoint(Point&source)
{
	centralpoint=source;            // used the Point variable passed as the arguement and assign it to be the private data member centralpoint of the current Circle variable

	return centralpoint;
}


string Circle::ToString()
{
	stringstream sn;
	sn<<"Radius : "<<m_radius<<"\n"<<"Diameter : "<<diameter<<"\nArea : "<<area<<"\ncircumference : "<<circumference;
	// assign the above code to the stringstream sn
     string mystr=sn.str();          //assign the content of the above stringstream sn to the string variable mystr
	
	 return mystr;

}

Circle& Circle::operator = (const Circle& source)            // the assignment operator member function for Circle
{
	Shape::operator = (source);              //call the assignment operator function of Shape base class
	if (this == &source)                  // if the current Circle variable's attributes are equivalent to that of the Circle variable passed as the arguement
		
		return *this;                 // return the current Circle variable


		else

    m_radius=source.m_radius;
	diameter=source.diameter;
	centralpoint=source.centralpoint;          // else, assign the private data members of the Circle variable passed as the arguement to the private data members of the current Circle variable
	area=source.area;
	circumference=source.circumference;

	return *this;
	                

}