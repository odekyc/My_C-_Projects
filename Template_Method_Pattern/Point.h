#ifndef Point_HPP
#define Point_HPP
#include"Shape.h"

#include <cmath>

#include<string>
#include<sstream>
#include <iostream>
using namespace std;



class Point: public Shape      //declare the class Point as the public derived class of base class Shape
{
private:
	double x;	// X coordinate
	double y;	// Y coordinate

public:
	// Constructors
	Point();								// Default constructor
    Point(Point&source);                //copy constructor
	Point(double tempx, double tempy);	     // constructor for a Point that assign the value of the first double number to the private data member x
	                                       // and the value of the second double number to the private data member y
	
	~Point();

	// Accessing functions
	
	string ToString();                  // create a member function called ToString() that returns type string 
	Point& operator = (const Point& source);       // assignment operator for the Point derived class
	

	double X();           // return the x-coordinate of the current Point variable
	void X(double newX);
	double Y();              //return the y-coordinate of the current Point variable
	void Y(double newY);
	double GetX();          // get the x-coordinate of the current Point variable
	double GetY();          //
	void SetY(double newyval);         // member function that set the double number passed in the argument as the private data member y
	void SetX(double newxval);                // member function that set the double number passed in the argument as the private data member x
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


