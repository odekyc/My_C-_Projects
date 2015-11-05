#ifndef Shape_HPP
#define Shape_HPP

#include <iostream>
#include<sstream>
using namespace std;

class Shape
{
private:
     int m_id;    //private variable id 
public:
	Shape();   //default constructor
	Shape( Shape& source);   //copy constructor
	virtual ~Shape();   //virtual destructor overriden by derived class destructor
	Shape& operator = (const Shape& source);      //assignment operator for Shape variable
	int ID();    //returns ID of Shape variable
	virtual string ToString();     //virtual ToString() member function
	friend ostream& operator << (ostream& os, Shape p);     //<<operator for Shape variable











};

#endif
