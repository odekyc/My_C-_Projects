#ifndef CIRCLE_HPP
#define CIRCLE_HPP


#include<iostream>
#include<string>
#include<sstream>
#include "Point.h"

using namespace std;

class Circle: public Shape     //declare class Circle as the public derived class of base class Shape
{
private:
	double m_radius;
	Point centralpoint;
	double diameter;                  // declare the private data members of class Circle
	double area;
	double circumference;
	
	
public:
	Circle();         //default constructor of Circle class
	Circle( double tempradius);      // constructor of Circle class with a double number passed as arguement
	Circle( Circle&source);          //copy constructor of Circle class
	~Circle();                         // destructor of Circle class
	Point CentralPoint(Point& source);             // assign the Point variable passed as the arguement to the private data member centralpoint

	string ToString();                       // ToString() member function that returns a string
	Circle& operator = (const Circle& source);               // assignment operator of Circle class

};

#endif