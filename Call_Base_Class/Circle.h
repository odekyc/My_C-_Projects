#ifndef CIRCLE_HPP
#define CIRCLE_HPP


#include<iostream>
#include<string>
#include<sstream>
#include "Point.h"

using namespace std;

class Circle: public Shape     //derived Circle class from public base Shape class
{
private:            //private variables declared
	double m_radius;
	Point centralpoint;
	double diameter;
	double area;
	double circumference;
	
	
public:
	Circle();               //default Circle constructor
	Circle( double tempradius);         //constructor with the double radius parameter
	Circle( Circle&source);          //copy constructor
	~Circle();      //destructor
	Point CentralPoint(Point& source);       //sets the Point source variable passed in the parameter as the centralpoint

	string ToString();             //create a string for the properties of the current Circle variable
	Circle& operator = (const Circle& source);      //assignment operator for the Circle variable

};

#endif