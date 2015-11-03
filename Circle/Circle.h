#ifndef CIRCLE_HPP
#define CIRCLE_HPP


#include<iostream>
#include<string>
#include<sstream>
#include "distanceandpoint.h"
using namespace std;

class Circle
{
private:  //declare private variables
	double m_radius;    // radius
	Point centralpoint;  //centralpoint
	double diameter;     //diameter
	double area;        //area
	double circumference;   //circumference
	
	
public:
	Circle();  //default constructor for Circle
	Circle( double tempradius);    //constructor for Circle that uses the radius passed in the argument to create the other private variables
	~Circle();  //destructor for Circle
	Point CentralPoint(Point& source);    //sets the Point variable passed as parameter as centralpoint of current circle
	double Radius(double tempradius);    //sets the radius double number passed as parameter as radius of current circle
	double Diameter();    //return diameter value
	double Area();     //return area value
	double Circumference();    //return circumference vvalue
	string ToString();      //creates a string using ToString() function

};

#endif