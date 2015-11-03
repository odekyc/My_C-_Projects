#ifndef CIRCLE_HPP
#define CIRCLE_HPP


#include<iostream>
#include<string>
#include<sstream>
#include "Point.h"
using namespace std;

class Circle
{
private:  //declare private variable for Circle class
	double m_radius;
	Point centralpoint;
	double diameter;
	double area;
	double circumference;
	
	
public:
	Circle();   //default constructor for Circle
	Circle( double tempradius);    //constructor for Circle with parameter a double number as radius
	~Circle();   //destructor
	Point CentralPoint(Point& source);    //use Point variable passed as parameter as centralpoint of current Circle
	double Radius(double tempradius);    //set the double number parameter as the radius of the circle
	double Radius();    //getter for radius
	double Diameter();   //getter for diameter
	double Area();      //getter for area
	double Circumference();     //getter for circumference
	string ToString();       // use stringstream to create and return a string for Point variable fashioned after (x,y)

};

ostream& operator << (ostream& os,  Circle p);


#endif