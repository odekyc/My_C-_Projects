#ifndef POINT_HPP
#define POINT_HPP

#include<iostream>
#include<string>
using namespace std;

class Point
{

private:

     double m_x; // X value of point
     double m_y; // Y value of point

public:
	 Point(); // Default constructor, no return type
	~Point(); // Destructor, no return type}
	
    double GetX(); //get x function
	double GetY();   //get y function

// Modifiers
    void SetX(double newxval); // Set the x value
    void SetY(double newyval); // Set the y value

	void ToString();

	

};

#endif
