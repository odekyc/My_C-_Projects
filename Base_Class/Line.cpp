#include "Line.h"
#include <iostream>
#include<string>
#include<sstream>
using namespace std;
 
Line::Line(): Shape() 
{
	//default constructor for Line
}

Line::~Line()
{
	       // default destructor for Line
}

Line::Line( Point& p1, Point& p2) 
{
	startPoint=p1;
	endPoint=p2;                    // if the user include two Point type variables as arguements, set the first Point arguement as startpoint, second arguement as endpoint
}

Line::Line(Line& source) : Shape()
{
	startPoint=source.startPoint;                   // copy constructor if the user include a Line type arguement
	endPoint=source.endPoint;
}




string Line::ToString()
{
stringstream ss;
ss<< "startpoint: ("<<startPoint.X()<<","<<startPoint.Y()<<")\nendpoint:("<< endPoint.X()<<","<<endPoint.Y()<<")\n" ;          // create a string using the the format of this line of code         // create a string using the the format of this line of code
string mystr=ss.str();

return mystr;                
}

Line& Line::operator = (const Line& source)
{
	Shape::operator = (source);

	if (this == &source)                //assignment operator that assigns a line variable to the current line variable
		
		return *this;


		else

    startPoint=source.startPoint;
	endPoint=source.endPoint;

	return *this;
	                

}

Point Line::start()
{
	return startPoint;                 // member function of type Point that returns the startpoint private object 
}

Point Line::end() 
{
	return endPoint;                   // member function of type Point that returns the endpoint private object 
}

void Line::start(const Point& pt)
{
	startPoint=pt;                    //   if the start function has a Point type arguement, set the startPoint to this arguement
}

void Line::end(const Point& pt)
{
	endPoint=pt;                          //   if the end function has a Point type arguement, set the endPoint to this arguement
}