#ifndef Shape_HPP
#define Shape_HPP

#include <iostream>
#include<sstream>
using namespace std;

class Shape
{
private:
     int m_id;     //declare private variable for ID of Shape variable
public:
	Shape();     //default constructor
	Shape( Shape& source);     //copy constructor
	~Shape();      //destructor
	Shape& operator = (const Shape& source);           //assignment operator for Shape variable
	int ID();    //returns ID of Shape variable
	virtual string ToString();         //virtual ToString() function to create a string
	friend ostream& operator << (ostream& os, Shape p);
	// << operator for Shape variable










};

#endif
