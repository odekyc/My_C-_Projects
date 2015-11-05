#ifndef Point_HPP
#define Point_HPP
#include"Shape.h"

#include <cmath>

#include<string>
#include<sstream>
#include <iostream>
using namespace std;



class Point: public Shape
{
private:
	double x;	// X coordinate
	double y;	// Y coordinate

public:
	// Constructors
	Point();								// Default constructor
    Point(Point&source);           //copy constructor
	Point(double tempx, double tempy);		     //constructor with two double parameter, first as the x-coordinate and the second as the y-coordinate
	
	~Point();           //destructor

	// Accessing functions
	
	string ToString();                  // create a member function called ToString() that returns type string 
	Point& operator = (const Point& source);            //assignment operator for Point variable
	

	double X();           //getter for X-coordinate
	void X(double newX);       //setter for X-coordinate
	double Y();         //getter for Y-coordinate
	void Y(double newY);       //setter for Y-coordinate
	double GetX();      //getter for X-coordinate
	double GetY();      //getter for Y-coordinate
	void SetY(double newyval);         //setter for X-coordinte
	void SetX(double newxval);         //setter for Y-coordinate
};



#endif // Point_HXX

// V2
// Accessing functions
	/*double getX() const;					// The x-coordinate
	void setX(double newX);
	double getY() const;					// The y-coordinate
	void setY(double newY);

	double Distance(const Point& pt) const;
	Point Add(const Point& pt) const;*/


