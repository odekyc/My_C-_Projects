#ifndef Point_HPP
#define Point_HPP
#include"Shape.h"

#include <cmath>

#include<string>
#include<sstream>
#include <iostream>
using namespace std;



class Point: public Shape         //declare class Point as a public derived class from base class Shape
{
private:
	double x;	// X coordinate
	double y;	// Y coordinate

public:
	// Constructors
	Point();								// Default constructor
    Point(Point&source);                 //copy constructor
	Point(double tempx, double tempy);	     //	constructor that creates a point from two double numbers passed as arguements, first number would become the x-coordinate, while the second number would be the y-coordinate
	
	~Point();           //destructor

	// Accessing functions
	
	string ToString();                  // create a member function called ToString() that returns type string 
	Point& operator = (const Point& source);                //assignement operator for the Point derived class
	

	double X();                                    // returns the value of the x-coordinate of the Point variable
	void X(double newX);                        //assigns the double value passed as the arguement as the x-coordinate of the Point variable
	double Y();                               //returns the value of the y-coordinate of the Point variable
	void Y(double newY);                   //assigns the double value passed as the arguement as the y-coordinate of the Point variable
	double GetX();                    // get the x-coordinate of the Point variable
	double GetY();                   // get the y-coordinate of the Point variable
	void SetY(double newyval);         // use the double value passed as the arguement and set it as the y-coordinate of the Point variable
	void SetX(double newxval);        // use the double value passed as the arguement and set it as the x-coordinate of the Point variable
	void Draw();                            //Draw() member functions prints random things 

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


