#ifndef Line_HPP
#define Line_HPP

#include "Point.h"
#include "Shape.h"
#include <iostream>
#include<sstream>
using namespace std;

class Line : public Shape                 // declare class Line as a public derived class of base class Shape
{
private:
		
        Point startPoint;	// startpoint
	    Point endPoint;		// endpoint
    	friend ostream& operator << (ostream& os, const Line& p);      //declare the << operator as a friend operator
public:

	// Constructors
	Line();									// Line with both end Points at the origin
	Line(Point& p1, Point& p2);	// Line with end Points [p1, p2]
	Line(Line& source); 				// Copy constructor
	virtual ~Line();							// Destructor

	
	string ToString();                         // create a member function ToString() that returns a string
	Line& operator = (const Line& source);          // assignment operator for Line derived class
	Point start();                                 // returns a startpoint for the Line variable
	Point end();                                 //returns a endpoint for the Line variable
	void start(const Point& pt);                        // assign the coordinate values of the Point passed as arguement as the startpoint of the Line variable
	void end(const Point& pt);                     // assign the coordinate values of the Point passed as arguement as the endpoint of the Line variable
	void Draw();                                 //prints random drawing 
	
};




#endif

