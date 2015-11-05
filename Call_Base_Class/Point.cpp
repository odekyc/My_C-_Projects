#include "Point.h"


Point::Point(): Shape()
{// Default constructor

	                       
//	x = y =0.0;
}

Point:: Point(Point &source) : Shape(source)
{            // initialize both x and y to the value of the double arguement xandyval
	
	x=source.x;
	y=source.y;
}

Point::Point(double tempx, double tempy)
{                             //constructor with two double numbers, first as the x-coordinate, second as the y-coordinate of current Point variable
	x=tempx;
	y=tempy;
}


Point::~Point()
{// Destructor
	
	
	
}

string Point::ToString()
{
	string s=Shape::ToString();
stringstream ss;
ss  << "("<<x<<"," << y <<")" ;                 // create a string using the the format of this line of code
string mystr=ss.str();
 mystr+=s;
return mystr;
}


Point& Point::operator = (const Point& source)           //assignment operator for Point variable
{
	Shape::operator = (source);
	if (this == &source)
		
		return *this;


		else

    x=source.x;
	y=source.y;

	return *this;
	                

}

double Point::X() 
{
	return x;                      // return the private object x
}

void Point::X(double newX)
{ 
	x = newX;                       //  if a double arguement, set the private object x to the value of the arguement
}


double Point::Y() 
{
	return y;                                // return the private object y 
}

void Point::Y(double newY)                   //  if a double arguement, set the private object y to the value of the arguement
{ 
	y = newY;
}

// Get the x value
double Point::GetX()
{
return x;
}
// Get the y value
double Point::GetY()
{
return y;
}



// Set the x value
void Point::SetX(double newxval)
{
x = newxval;
}
// Set the y value
void Point::SetY(double newyval)
{
y = newyval;
}