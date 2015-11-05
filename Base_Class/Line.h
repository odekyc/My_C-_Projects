#ifndef Line_HPP
#define Line_HPP

#include "Point.h"
#include "Shape.h"
#include <iostream>
#include<sstream>
using namespace std;

class Line : public Shape
{
private:
		
        Point startPoint;	// startpoint
	    Point endPoint;		// endpoint
    	friend ostream& operator << (ostream& os, const Line& p);
public:

	// Constructors
	Line();									// Line with both end Points at the origin
	Line(Point& p1, Point& p2);	// Line with end Points [p1, p2]
	Line(Line& source); 				// Copy constructor
	virtual ~Line();							// Destructor

	
	string ToString();                         // create a member function ToString() that returns a string
	Line& operator = (const Line& source);  //assignment operator for Line variable
	Point start();     //getter for startpoint
	Point end();           //getter for endpoint
	void start(const Point& pt);    //setter for startpoint
	void end(const Point& pt);    //setter for endpoint
	
};




#endif

