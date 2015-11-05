#ifndef CIRCLE_HPP
#define CIRCLE_HPP


#include<iostream>
#include<string>
#include<sstream>
#include "Point.h"

using namespace std;

class Circle: public Shape            //declare class Circle as a public derived class of base class Shape
{
private:
	double m_radius;
	Point centralpoint;
	double diameter;                 //declare the private data members for derived class Circle
	double area;
	double circumference;
	
	
public:
	Circle();              //default constructor of Circle
	Circle( double tempradius);        // constructor of Circle with one double value passed as arguement
	Circle( Circle&source);          //copy constructor of Circle
	~Circle();                       //destructor of Circle
	Point CentralPoint(Point& source);         // the Point variable passed as the arguement is set as the centralpoint private data member of derived class Circle
	void Draw();                // Draw() member function of Circle derived class
	string ToString();          //ToString() member function that returns a string
	Circle& operator = (const Circle& source);          // assignment operator of Circle derived class

};

#endif