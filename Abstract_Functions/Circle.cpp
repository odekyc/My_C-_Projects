
#include"Circle.h"


Circle::Circle() : Shape()             //default constructor for Circle, will assign the value 0 to m_radius, diameter, area, and circumference
{
		m_radius=0;
	
     diameter=0;
	area=0;
	circumference=0;
}

Circle::Circle( Circle & source) : Shape()                  // copy constructor for Circle, will copy the m_radius, centralpoint, diameter, area, and circumference values stored in Circle variable passed in the arguement
{
		m_radius=source.m_radius;
	centralpoint=source.centralpoint;
     diameter=source.diameter;
	area=source.area;
	circumference=source.circumference;
}

Circle::Circle(double tempradius)                          //constructor for a Circle if the radius is passed as the arguement, would calculate the diameter, area, circumference from the value of the radius
{
	m_radius=tempradius;
	diameter= 2*tempradius;
	area= 3.141592653589793238463* pow(tempradius, 2);
	circumference= 3.141592653589793238463*tempradius*2;

}
Circle::~Circle()               //destructor for Circle
{
}
Point Circle::CentralPoint(Point&source)           // the CentralPoint member function would, from the Point variable passed as the arguement, assign this Point variable passed as the arguement as the centralpoint private data member
{
	centralpoint=source;

	return centralpoint;
}


string Circle::ToString()
{
	stringstream sn;
	sn<<"Radius : "<<m_radius<<"\n"<<"Diameter : "<<diameter<<"\nArea : "<<area<<"\ncircumference : "<<circumference;       // sent this line of code to the stringstream variable sn

     string mystr=sn.str();         //using sn.str() to call the string stored in the stringstream variable sn and assign it to a string variable mystr
	
	 return mystr;

}

Circle& Circle::operator = (const Circle& source)                 //create assignment operator = in the Circle class
{
	Shape::operator = (source);                           //  call the assignment operator function of base class Shape
	if (this == &source)
		                                                   // if the current Circle variable is equal to the Circle variable passed in the arguement, return the current Circle variable and all its attributes
		return *this;


		else                                              // else, assign m_radius with the value of source.m_radius, do the same for diameter, centralpoint, area, and circumference

    m_radius=source.m_radius;
	diameter=source.diameter;
	centralpoint=source.centralpoint;
	area=source.area;
	circumference=source.circumference;

	return *this;
	                

}

void Circle::Draw()
{       cout<<"    ooo      "<<endl;
        cout<<"   ooooo     "<<endl;
		cout<<"  ooooooo    "<<endl;
		cout<<"   ooooo     "<<endl;
		cout<<"    ooo      "<<endl;                      // print random things as well as call the Circle ToString() in the Draw() member function
		cout<<ToString()<<endl;
}