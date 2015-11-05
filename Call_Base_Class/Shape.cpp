#include "Shape.h"
#include <cmath>
#include <iostream>
#include<string>
#include<sstream>
#include <stdlib.h>
using namespace std;

Shape::Shape()           //default constructor
{ 
	m_id=rand();
}

Shape::Shape(Shape & source)         //copy constructor 
{
	m_id=source.m_id;
}

Shape::~Shape()
{
}  //destructor

Shape& Shape:: operator = (const Shape& source)       //assignment operator for Shape variable
{
		if (this == &source)
		
		return *this;
		else

    m_id=source.m_id;

	return *this;
}

int Shape::ID()
{
	return m_id;        //return ID of the Shape variable
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
	stringstream s;
    os<<p.ToString()<<endl;                                   // source code for the << operator
    return os;
}