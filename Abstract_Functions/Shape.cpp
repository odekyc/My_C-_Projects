#include "Shape.h"
#include <cmath>
#include <iostream>
#include<string>
#include<sstream>
#include <stdlib.h>
using namespace std;

Shape::Shape()
{ 
	m_id=rand();           //default constructor of base class Shape that assigns a random integer to m_id private data member
}

Shape::Shape(Shape & source)
{
	m_id=source.m_id;           // assign the m_id value of the Shape variable passed as arguement to the current Shape variable's m_id private data member
}

Shape::~Shape()
{                   //destructor of Shape base class
}

Shape& Shape:: operator = (const Shape& source)       // assignment operator for the Shape base class
{
		if (this == &source)                    // if the current Shape variable is equivalent in values and attributes to the Shape variable called source passed as arguement
		
		return *this;                      //return the current Shape variable's value
		else                              //else

    m_id=source.m_id;               //set the current Shape variable's private data member m_id to that of the Shape variable source's private data member m_id

	return *this;                  // return the value of the current Shape variable
}

int Shape::ID()
{
	return m_id;            //return the private data member m_id 
}

string Shape::ToString()
{
	stringstream ss;
ss<< "ID : "<< m_id;                // create a string using the the format of this line of code
string mystr=ss.str();

return mystr;
}

ostream& operator << (ostream& os, Shape& p) // Send to ostream
{
	stringstream s;
    os<<p.ToString();                                   // source code for the << operator
    return os;
}



