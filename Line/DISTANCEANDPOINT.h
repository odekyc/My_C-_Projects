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
	Point(const double x, const double y);      //constructor for Point variable that sets two double parameters as startPoint and endPoint respectively
	~Point();
	//destructor
	
	 // Destructor, no return type
	double GetX(); //get x function
	double GetY();   //get y function
   
// Modifiers
     double X(const double x) const;     //setter for X-coordinate using double number passes as parameter
     double Y(const double y) const;     //setter for Y-coordinate using double number passes as parameter
	
	void ToString() const;       //creates a string for the Point variable in the (x,y) fashion

	double Distance() const; // Calculate the distance to the origin (0, 0).
    double Distance(const Point & p) const; // Calculate the distance between two points.

};
#endif
