#include "Line.h"
#include <iostream>
#include<string>
#include<sstream>
using namespace std;
 
Line::Line() : startPoint(0,0), endPoint(0,0)
{
	//default constructor for Line
}

Line::~Line() 
{
	       // default destructor for Line
}

Line::Line(const Point& p1, const Point& p2): startPoint(p1), endPoint(p2)
{
	startPoint=p1;
	endPoint=p2;                    // if the user include two Point type variables as arguements, set the first Point arguement as startpoint, second arguement as endpoint
}

Line::Line(const Line& Ll)
{
	startPoint=Ll.startPoint;                   // copy constructor if the user include a Line type arguement
	endPoint=Ll.endPoint;
}

Point Line::start() const
{
	return startPoint;                 // member function of type Point that returns the startpoint private object 
}

Point Line::end() const
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

string Line::ToString()
{
stringstream ss;
ss<< "startpoint: ("<<startPoint.X()<<","<<startPoint.Y()<<")\nendpoint:("<< endPoint.X()<<","<<endPoint.Y()<<")\n" ;          // create a string using the the format of this line of code
string mystr=ss.str();

return mystr;                
}

ostream& operator << (ostream& os, const Line& p) // Send to ostream
{
	os<<"("<<p.startPoint.X()<<","<<p.startPoint.Y()<<")\n"<<"("<<p.endPoint.X()<<","<<p.endPoint.Y()<<")\n";                                           // source code for the << operator
    
    return os;
}