#include"Point.h"
#include"Line.h"
#include"Circle.h"
#include <iostream>
using namespace std;
void main()
{
	Line l;     // when only Line l; is the source code included in this file, the default constructor for class Point is called twice
	       // after the colon syntax method is used for the Line.cpp, the source code Line l; returns, on the debug screen, the Point constructor with double arguements is called twice, therefore the number 
	                        //of times the class Point constructor is called doesn't change, but the constructor that is called is no longer the
	                        //default constructor but the Point constructor with double arguements.


	Circle m;       // when Circle m is created, the default constructor for point is called once

	Line l2(Point(1,2), Point(3, 4));
	cout<<l2.ToString()<<endl;


	system("PAUSE"); 
}