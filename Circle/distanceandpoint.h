#ifndef DISTANCEANDPOINT_HPP
#define DISTANCEANDPOINT_HPP

#include<iostream>
#include<string>
using namespace std;

class Point
{

private:

     double m_x; // X value of point
     double m_y; // Y value of point

public:
	Point(); // Default constructor, no return type
	
	Point( const Point& source); // copy constructor 
	Point(const double x, const double y);  //constructor for Point with two double numbers passed as parameter, first double x-coordinate while second double y-coordinate
	~Point();   //destructor
	
	
	 // Destructor, no return type
	double GetX(); //get x function
	double GetY();   //get y function
   
// Modifiers
     double X(const double x) const;   //setter and getter of x-coordinate
     double Y(const double y) const;   //setter and getter of y-coordinate
	
	void ToString() const;   //use stringstream to create a string in (x,y) fashion for the current point variable

	double Distance() const; // Calculate the distance to the origin (0, 0).
    double Distance(const Point & p) const; // Calculate the distance between two points.

};
#endif
