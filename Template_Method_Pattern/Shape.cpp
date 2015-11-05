#include "Shape.h"
#include <cmath>
#include <iostream>
#include<string>
#include<sstream>
#include <stdlib.h>
using namespace std;

Shape::Shape()
{ 
	m_id=rand();            // default constructor of Shape base class, assigns a random integer to m_id
}

Shape::Shape(Shape & source)
{
	m_id=source.m_id;           // copy constructor of Shape base class
}

Shape::~Shape()
{
}                       // destructor of Shape base class

Shape& Shape:: operator = (const Shape& source)            // the assignment operator of Shape base class
{
		if (this == &source)                 //  if the current Shape variable is equivalent if attributes to Shape variable that is passed as arguement
		
		return *this;                      // return the value of the current Shape variable
		else                                  //else

    m_id=source.m_id;                       //assign the m_id integer value of Shape variable that is passed as arguement to the current Shape variable 

	return *this;
}

int Shape::ID()
{
	return m_id;               //returns the value of m_id to the ID() member function
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

void Shape::Print()
{
	cout<<ToString()<<endl;                    // Print() function of the base Shape class
}