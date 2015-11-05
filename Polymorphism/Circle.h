#ifndef CIRCLE_HPP
#define CIRCLE_HPP


#include<iostream>
#include<string>
#include<sstream>
#include "Point.h"

using namespace std;

class Circle: public Shape        //Circle class is a derived class of Shape base class
{
private:    //declare private variables for Circle class
	double m_radius;
	Point centralpoint;
	double diameter;
	double area;
	double circumference;
	friend ostream& operator << (ostream& os, Circle c);
	
public:
	Circle();    //default constructor 
	Circle( double tempradius);    //constructor with a double radius parameter 
	Circle( Circle&source);    //copy constructor
	~Circle();    //destructor
	Point CentralPoint(Point& source);             //use the Point source variable and set it as the central point of the current Circle variable

	string ToString();    //creates a string that outputs the properties of the current Circle variable 
	void operator = (const Circle& source);      //assignment operator for Circle variable

};

#endif