#include "Shape.h"
#include <cmath>
#include <iostream>
#include<string>
#include<sstream>
#include <stdlib.h>
using namespace std;

Shape::Shape()
{ 
	m_id=rand();
}         //default constructor that generates a random variable and assigns it to be the ID of the current Shape variable

Shape::Shape(Shape & source)
{
	m_id = source.m_id;         //Copy constructor 
}

Shape::~Shape()            //destructor
{
}

Shape& Shape:: operator = (const Shape& source)
{                                           //assignment operator for Shape variable
		if (this == &source)
		
		return *this;
		else

    m_id=source.m_id;

	return *this;
}

int Shape::ID()
{                       //getter for the ID of the Shape variable
	return m_id;
}

string Shape::ToString()
{
	stringstream ss;
ss<< "ID : "<< m_id;                // create a string using the the format of this line of code
string mystr=ss.str();

return mystr;
}

ostream& operator << (ostream& os, Shape p) // Send to ostream
{
	
	os << p.ToString() << endl;                      // source code for the << operator
    return os;
}