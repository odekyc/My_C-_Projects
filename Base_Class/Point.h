#ifndef Point_HPP
#define Point_HPP
#include"Shape.h"

#include <cmath>

#include<string>
#include<sstream>
#include <iostream>
using namespace std;



class Point: public Shape
{    //Point is a derived class of base class Shape
private:
	double x;	// X coordinate
	double y;	// Y coordinate

public:
	// Constructors
	Point();								// Default constructor
    Point(Point&source);
	Point(double tempx, double tempy);		
	
	~Point();

	// Accessing functions
	
	string ToString();                  // create a member function called ToString() that returns type string 
	Point& operator = (const Point& source);   //assignment operator for Point variable
	

	double X();      //getter for X
	void X(double newX);     //setter for X
	double Y();     //getter for Y
	void Y(double newY);    //setter for Y
	double GetX();      //getter for X
	double GetY();       //getter for Y
	void SetY(double newyval);        //setter for x
	void SetX(double newxval);       //setter for y
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


