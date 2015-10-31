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
	Point(double x, double y);
	
	~Point(); // Destructor, no return type}
   
// Modifiers
     double X();
     double Y();
	
	void ToString();

	double Distance(); // Calculate the distance to the origin (0, 0).
    double Distance(Point p); // Calculate the distance between two points.

};


#endif




