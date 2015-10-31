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
	Point(const double x, const double y);
	
	~Point(); // Destructor, no return type}
   
// Modifiers
     double X(const double x) const;
     double Y(const double y) const;
	
	void ToString() const;

	double Distance() const; // Calculate the distance to the origin (0, 0).
    double Distance(const Point & p) const; // Calculate the distance between two points.

};


#endif




