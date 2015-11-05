#ifndef CIRCLE_HPP
#define CIRCLE_HPP


#include<iostream>
#include<string>
#include<sstream>
#include "Point.h"

using namespace std;

class Circle: public Shape      //derived Circle class base Shape base class
{
private:     //private variables
	double m_radius;
	Point centralpoint;
	double diameter;
	double area;
	double circumference;
	
	
public:
	Circle(); //default constructor
	Circle( double tempradius);     //constructor that has one radius parameter
	Circle( Circle&source);     //copy constructor
	~Circle();    //destructor
	Point CentralPoint(Point& source);        //sets the parameter Point variable called source as the central point of the current Circle variable

	string ToString();        //creates a string for the properties of the current Circle variable
	Circle& operator = (const Circle& source);      //assignment operator for Circle variable

};

#endif