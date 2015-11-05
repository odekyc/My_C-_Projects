#include<iostream>
#include"Shape.h"
#include"Point.h"
#include"Line.h"
#include"Circle.h"
using namespace std;


void main()
{




Shape s; // Create shape.
Point p(10, 20); // Create point.
Line l(Point(1,2), Point(3, 4)); // Create line.


cout<<s.ToString()<<endl; // Print shape.-the ToString() function of base class Shape is called
cout<<p.ToString()<<endl; // Print point-the ToString() function of derived class Point is called
cout<<l.ToString()<<endl; // Print line-the ToString() function of derived class Line is called
cout<<"Shape ID: "<<s.ID()<<endl; // ID of the shape. the ID of shape s is printed, it is a random integer assigned using rand()
cout<<"Point ID: "<<p.ID()<<endl; // ID of the point. Does this work?-the ID of point p is printed, it is a random integer assigned using rand(), using the base class Shape ID() member function
cout<<"Line ID: "<<l.ID()<<endl; // ID of the line. Does this work?-the ID of line l is printed, it is a random integer assigned using rand(), using the base class Shape ID() member function
Shape* sp; // Create pointer to a shape variable.
sp=&p; // Point in a shape variable. Possible?-answer is yes, you can assign a a Point variable to a pointer for Shape variable 
cout<<sp->ToString()<<endl; // What is printed?- the same as p.ID() from above, so the base class Shape's ToString() member function is called
// Create and copy Point p to new point.
Point p2;
p2=p;
cout<<p2<<", "<<p2.ID()<<endl; // Is the ID copied if you do not call- the ID is not copied if you only use cout<<p2, it would only give the address where Point p2 is stored. you need to use p2.ID() to print the same thing as p.ID()
// the base class assignment in point?

system("PAUSE");

}