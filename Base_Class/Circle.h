#ifndef CIRCLE_HPP
#define CIRCLE_HPP


#include<iostream>
#include<string>
#include<sstream>
#include "Point.h"

using namespace std;

class Circle: public Shape     //circle is a derived class of shape
{
private:    //declare private variables
	double m_radius;
	Point centralpoint;
	double diameter;
	double area;
	double circumference;
	
	
public:
	Circle();     //default constructor
	Circle( double tempradius);    //constructor with one double number parameter as radius and from it derives the values of the other private variables
	Circle( Circle&source);    //copy constructor for Circle
	~Circle();     //destructor
	Point CentralPoint(Point& source);     //use the point passed in the parameter and set it as the centralpoint of our current circle variable

	string ToString();       //creates a string with contents relates to the properties of our current circle
	void operator = (const Circle& source);    //assignment operator that assigns the circle source to the current circle

};

#endif