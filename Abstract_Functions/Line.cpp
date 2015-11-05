#include "Line.h"
#include <iostream>
#include<string>
#include<sstream>
using namespace std;
 
Line::Line(): startPoint(0,0), endPoint(0,0) 
{
	//default constructor for Line, assign both the x and y coordinates of startPoint and endPoint with the value of 0
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
ss<< "startpoint: ("<<startPoint.X()<<","<<startPoint.Y()<<")\nendpoint:("<< endPoint.X()<<","<<endPoint.Y()<<")\n" ;     // create a string using the the format of this line of code
string mystr=ss.str();
// call the content store in stringstream ss and assign its content string to string variable mystr
return mystr;                
}

Line& Line::operator = (const Line& source)         //the assignment operator of Line derived class
{
	Shape::operator = (source);           // call the assignment operator of the Shape base class

	if (this == &source)
		
		return *this;


		else

    startPoint=source.startPoint;
	endPoint=source.endPoint;

	return *this;
	                

}


void Line:: Draw()
{
     cout<<"   _________    "<<ToString()<<endl;             //  prints spaces and a line and call the Line derived class ToString() member function
}