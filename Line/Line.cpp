#include "DISTANCEANDPOINT.h"
#include "Line.h"
#include<sstream>
#include<string>
#include<iostream>

using namespace std;

Line::Line()
{
	startPoint.X(0.0);
	startPoint.Y(0.0);      //default constructor for Line variable that sets both startpoint and endpoint as (0.0,0.0)
	endPoint.X(0.0);
	endPoint.Y(0.0);
}
Line::Line(const Point& p1, const Point& p2)
{
	startPoint=p1;       //constructor for Line variable that sets startPoint=p1 and endPoint=p2
	endPoint=p2;
}

Line::Line(const Line& l)
{
	startPoint=l.P1();       //copy constructor for Line variable
	endPoint=l.P2();
}
Line::~Line()
{   //destructor 
}

void Line::SetPoint( Point &tempstart, Point& tempend)
{
	startPoint=tempstart;         //set the two points passed in the argument as startPoint and endPoint respectively
	endPoint=tempend;
}


void Line::GetPoint( Point& tempstart, Point& tempend)
{
	cout<<"Start Point has coordinate : ";
	tempstart.ToString();                            // get and output onto screen the startpoint and endpoint in (x,y) fashion
	cout<<"\nEnd Point has coordinate : ";
	tempend.ToString();
}

string Line:: ToString()
{
	stringstream sm;
	sm << "Start Point: ("<<startPoint.GetX()<<","<<startPoint.GetY()<<")\n"<<"End Point: ("<<endPoint.GetX()<<","<<endPoint.GetY()<<")";

	string mystring=sm.str();           //use stringstream to create a string for Line variable 

	return mystring;


}

Point Line:: P1() const
{
	return startPoint;      //getter for startPoint
}

Point Line:: P2() const
{	
	
	return endPoint;	//getter for endPoint

}

void Line:: SetPointStart( Point& tempstart)
{
	startPoint=tempstart;          //setter for startPoint
}

void Line:: SetPointEnd( Point& tempend)
{
	endPoint=tempend;       //setter for endPoint
}

double Line::Length()
{
	return startPoint.Distance(endPoint);          //find the length between startPoint and endPoint
	
}


