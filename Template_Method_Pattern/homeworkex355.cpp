#include<iostream>
#include"Point.h"
#include"Line.h"
#include"Shape.h"
#include"Circle.h"

void main()
{

	Point p(3.2,4.5);    //create a Point variable p and assigns the coordinate (3.2,4.5)
	p.Print();      //print the Point variable p

	Line l(Point(5.2, 6.4), Point(9.8, 3.6));   //create a Line variable l and assigns the startpoint and endpoint (Point(5.2, 6.4), Point(9.8, 3.6))

	l.Print();    //print the Line variable l

	// using the Template Method Pattern, although there is only one Print() function in the base class Shape and no other Print() member function
	// in any other derived class such as Point or Line or Circle, since in the base class Shape Print() function the ToString() is called, and since
	//ToString() is declared as virtual in the base class Shape, when I call p.Print() and l.Print() their derived class respective ToString() member 
	//functions overrides the base class Shape ToString() function

	system("PAUSE");     


}