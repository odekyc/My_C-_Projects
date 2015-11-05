#include "Shape.h"
#include <cmath>
#include <iostream>
#include<string>
#include<sstream>
#include <stdlib.h>
using namespace std;

Shape::Shape()
{                               //default constructor that generate a random number as the ID of the Shape variable
	m_id=rand();
}

Shape::Shape(Shape & source)            //copy constructor 
{
	m_id=source.m_id;
}

Shape::~Shape()
{          //destructor
}

Shape& Shape:: operator = (const Shape& source)
{
		if (this == &source)
		
		return *this;
		else                               //assignment operator that assigns the Shape variable passed in the parameter to the current Shape variable

    m_id=source.m_id;

	return *this;
}

int Shape::ID()
{
	return m_id;            //returns the ID for the current Shape variable
}

string Shape::ToString()
{
	stringstream ss;
ss<< "ID : "<< m_id;                // create a string using the the format of this line of code
string mystr=ss.str();

return mystr;
}

ostream& operator << (ostream& os, Shape p)
{
	os << p.ToString();         //the << operator for Shape variable

	return os;
}