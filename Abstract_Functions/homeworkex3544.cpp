#include <iostream>
#include"Point.h"
#include"Line.h"
#include"Shape.h"
#include"Circle.h"
using namespace std;

void main()
{
	Shape* shapes[10];            // create an array of 10 pointers to Shape base class named shapes
shapes[0]=new Line;
shapes[1]=new Point(4.6,9.7);            //since the Shape base class is only an abstract class, assign each pointer to Shape with derived class element(concrete shape)
shapes[2]=new Point(5.6,9.7);
shapes[3]=new Line( Point(3.0,2.1), Point(9.8,4.6));
shapes[4]=new Point;
shapes[5]=new Line;
shapes[6]=new Circle(2.57);
shapes[7]=new Circle;
shapes[8]=new Point;

shapes[9]=new Line(Point(1.0, 2.5), Point(3.4, 5.2));
for (int i=0; i!=10; i++) shapes[i]->Draw();            // print out each element in the shapes array
for (int i=0; i!=10; i++) delete shapes[i];            // delete each element in the shapes array
system("PAUSE");

}
