#ifndef DISTANCE_HPP
#define DISTANCE_HPP

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
	
    double GetX(); //get x function
	double GetY();   //get y function


// Set the x value
void SetX(double newxval)
{
m_x = newxval;
}
// Set the y value
void SetY(double newyval)
{
m_y = newyval;
}

	void ToString();    //creates a string for the Point variable in (x,y) fashion

	double DistanceOrigin(); // Calculate the distance to the origin (0, 0).
    double Distance(Point p); // Calculate the distance between two points.

};
inline double Point::GetX()
{
return m_x;              //creates an inline function that gets X-coordinate
}

inline double Point::GetY()
{
return m_y;
} //creates an inline function that gets Y-coordinate




#endif