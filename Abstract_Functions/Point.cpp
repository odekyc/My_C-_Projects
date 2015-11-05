#include "Point.h"


Point::Point(): Shape()
{// Default constructor
	x=0;
	y=0;
	                       
//	x = y =0.0;
}

Point:: Point(Point &source) : Shape(source)
{            // initialize both x and y to the value of the double arguement xandyval
	
	x=source.x;
	y=source.y;
}

Point::Point(double tempx, double tempy)
{
	x=tempx;
	y=tempy;            // assign the first double arguement value as the value of the x-coordinate, second double value as the value of the y-coordinate
}


Point::~Point()
{// Des...
	
	                   //destructor
	
}

string Point::ToString()
{
	
stringstream ss;
ss  << "("<<x<<"," << y <<")" ;                 // create a string using the the format of this line of code
string mystr=ss.str();                  // assign the string created in the last line of code to the string variable mystr
                               
return mystr;
}


Point& Point::operator = (const Point& source)                   //assignment operator of Point derived class
{
	Shape::operator = (source);                           //  call the assignment operator function of base class Shape
	if (this == &source)                                 // if the current Point variable is equal to the Point variable passed in the arguement, return the current Point variable and all its attributes
		
		return *this;


		else                                 // else, assign the value of x private data member of Point variable source to the x private data member of the current Point variable. do the same for the y private data member

    x=source.x;
	y=source.y;

	return *this;                     // return the value of the current Point variable
	                

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

void Point:: Draw()
{
	cout<<"    .    "<<ToString()<<endl;               //the draw() function of Point derived class prints spaces, a dot, and also calls the Point derived class ToString() function
}