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
ss<< "startpoint: ("<<startPoint.X()<<","<<startPoint.Y()<<")\nendpoint:("<< endPoint.X()<<","<<endPoint.Y()<<")\n" ;                // create a string using the the format of this line of code
string mystr=ss.str();                                                                                                            // and assign the content of this stringstream to the string variable mystr

return mystr;                
}

Line& Line::operator = (const Line& source)              // the assignment operator of the Line derived class
{
	Shape::operator = (source);                    //call the assignment operator of the Shape base class

	if (this == &source)                         //if the current Shape variable is equivalent in attributes to that of the Point variable passed as the argument
		
		return *this;                          // return the value of the current Shape variable


		else
			                                  //else
    startPoint=source.startPoint;             // assign the argument Line variable's private data member startPoint and endPoint to the current Line variable's private data member startPoint and endPoint
	endPoint=source.endPoint;

	return *this;
	                

}
