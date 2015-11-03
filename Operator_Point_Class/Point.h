#ifndef POINT_HPP
#define POINT_HPP

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
	~Point(); // Destructor, no return type}
	 Point(double x, double y);
	
    double GetX(); //get x function
	double GetY();   //get y function

// Modifiers
    void SetX(double newxval); // Set the x value
    void SetY(double newyval); // Set the y value

	void ToString();

	double DistanceOrigin(); // Calculate the distance to the origin (0, 0).
    double Distance(Point p); // Calculate the distance between two points.

	//member operator overloading
    Point operator - (void) const; // Negate the coordinates.
    Point operator * (double factor) const; // Scale the coordinates.
    Point operator + (const Point& p) const; // Add coordinates.
    bool operator == (const Point& p) const; // Equally compare operator.
    Point& operator = (const Point& source); // Assignment operator.
    Point& operator *= (double factor); // Scale the coordinates & assign.

};


#endif