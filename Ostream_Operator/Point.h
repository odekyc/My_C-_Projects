#ifndef Point_HPP
#define Point_HPP

#include <iostream>
using namespace std;



class Point
{
private:
	double x;	// X coordinate
	double y;	// Y coordinate

public:
	// Constructors
	Point();								// Default constructor
	Point(double xval, double yval);		// Initialize with x and y value
	
	~Point();

	// Accessing functions
	double X() const ;					// The x-coordinate
	void X(double newX);                  // if user include double type arguement, set the double number as the value for the x coordinate
	double Y() const;					// The y-coordinate
	void Y(double newY);                // if user include double type arguement, set the double number as the value for the y coordinate
	string ToString();                  // create a member function called ToString() that returns type string 
	
	
};

//global function for ostream
	ostream& operator << (ostream& os, Point p);              // create a friend (global) function for the operator <<


#endif // Point_HXX

// V2
// Accessing functions
	/*double getX() const;					// The x-coordinate
	void setX(double newX);
	double getY() const;					// The y-coordinate
	void setY(double newY);

	double Distance(const Point& pt) const;
	Point Add(const Point& pt) const;*/


