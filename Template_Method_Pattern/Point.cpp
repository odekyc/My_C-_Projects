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
	x=tempx;                            //assign the first double arguement value to private data member x, the second double number arguement value to private data member y
	y=tempy;
}


Point::~Point()
{// Des...
	
	//destructor 
	
}

string Point::ToString()
{
	stringstream ss;

ss  << "("<<x<<"," << y <<")" ;                 // create a string using the the format of this line of code
string mystr=ss.str();                 //assign the stringstream ss content to string mystr

return mystr;
}


Point& Point::operator = (const Point& source)             // assignment operator of Point class
{
	Shape::operator = (source);                      //call the Shape base class assignment operator
	if (this == &source)                              //  if the value of the current Point variable is equivalent to that of the Point variable passed as arguement
		
		return *this;                      //return the value of the current Point variable


		else                                   // else, assign the x and y coordinates of the Point variable passed as arguement to the current Point variable's x and y coordinates

    x=source.x;
	y=source.y;

	return *this;                          //return the value of the current Point variable
	                

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