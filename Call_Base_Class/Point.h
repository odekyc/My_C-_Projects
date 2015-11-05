#ifndef Point_HPP
#define Point_HPP
#include"Shape.h"

#include <cmath>

#include<string>
#include<sstream>
#include <iostream>
using namespace std;



class Point: public Shape             //derived Point class from base Shape class
{
private:
	double x;	// X coordinate
	double y;	// Y coordinate

public:
	// Constructors
	Point();								// Default constructor
    Point(Point&source);           //copy constructor
	Point(double tempx, double tempy);	    //	
	
	~Point();      //destructor

	// Accessing functions
	
	string ToString();                  // create a member function called ToString() that returns type string 
	Point& operator = (const Point& source);     //assignment operator for the Point variable
	

	double X();        //getter of x-coordinate
	void X(double newX);      //setter of x-coordinate
	double Y();        //getter of y-coordinate
	void Y(double newY);      //setter of y-coordinate
	double GetX();        //getter of x-coordinate
	double GetY();       //getter of y-coordinate
	void SetY(double newyval);       //setter of x-coordinate
	void SetX(double newxval);      //setter of y-coordinate
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


