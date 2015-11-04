#ifndef CIRCLE_HPP
#define CIRCLE_HPP


#include<iostream>
#include<string>
#include<sstream>
#include "Point.h"
using namespace std;

class Circle
{
private://declare private variables
	double m_radius;
	Point centralpoint;
	double diameter;
	double area;
	double circumference;
	
	
public:
	Circle();   //default constructor
	Circle( double tempradius);    //constructor with one double parameter as radius 
	~Circle();    //destructor
	Point CentralPoint(Point& source);    //user the Point variable passed as the parameter as the centralpoint
	double Radius(double tempradius);      //getter and setter of radius 
	double Diameter();     //getter of diameter
	double Area();       //getter of area
	double Circumference();   //getter of circumference
	string ToString();      //create a string for the Circle

};

#endif