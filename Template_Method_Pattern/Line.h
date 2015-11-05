#ifndef Line_HPP
#define Line_HPP

#include "Point.h"
#include "Shape.h"
#include <iostream>
#include<sstream>
using namespace std;

class Line : public Shape                //declare the Class Line as the public derived class of base class Shape
{
private:
		
        Point startPoint;	// startpoint
	    Point endPoint;		// endpoint
    	friend ostream& operator << (ostream& os, const Line& p);       //declare the << operator as friend member function of Line derived class
public:

	// Constructors
	Line();									// Line with both end Points at the origin
	Line(Point& p1, Point& p2);	// Line with end Points [p1, p2]
	Line(Line& source); 				// Copy constructor
	virtual ~Line();							// Destructor

	
	string ToString();                         // create a member function ToString() that returns a string
	Line& operator = (const Line& source);           // assignment operator of Line derived class
	Point start();                               // return the start point of the line variable
	Point end();                                  // return the end point of the line variable
	void start(const Point& pt);                 // assign the Point variable passed in the arguement as the start point of the line
	void end(const Point& pt);            // assign the Point variable passed in the arguement as the end point of the line
	
};




#endif

