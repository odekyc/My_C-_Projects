#ifndef Line_H
#define Line_H

#include "DISTANCEANDPOINT.h"
#include <iostream>
using namespace std;

class Line
{
private:
		
		Point startPoint;	// e1
		Point endPoint;		// e2
		

public:

	// Constructors
	Line();									// Line with both end Points at the origin
	Line(const Point& p1, const Point& p2);	// Line with end Points [p1, p2]
	Line(const Line& l); 				// Copy constructor
	~Line();							// Destructor

	// Accesssing functions
	Point P1() const;							
	Point P2() const;			
	
	
    void SetPoint( Point& tempstart, Point& tempend);      // Set startPoint and endPoint for the Line variable as the two points passed in the parameters, respectively
	
	void GetPoint( Point& tempstart, Point& tempend);     // Set and get startPoint and endPoint for the Line variable as the two points passed in the parameters, respectively
	
	void SetPointStart( Point &tempstart);          // use the Point passed as parameter and set it as startPoint
	void SetPointEnd( Point& tempend);         // use the Point passed as parameter and set it as endPoint
	
	double Length();   //find the length of the Line variable
	string ToString();
};
#endif