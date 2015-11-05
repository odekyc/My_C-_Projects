#include<iostream>
#include"Point.h"
#include"Circle.h"
#include"Line.h"
#include"Shape.h"
using namespace std;

void main()
{
	Point p(10, 20); // Create point.
Shape* sp; // Create pointer to a shape variable.
sp=&p; // Point in a shape variable. Possible?
cout<<sp->ToString()<<endl; // What is printed?- answer- after base class Shape ToString() is declared virtual, 
//the ToString() function of derived Point class is printed instead of that of the base class Shape, so ToString() of base class Shape is overridden. 

system("PAUSE");


}