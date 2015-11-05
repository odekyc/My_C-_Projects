#include<iostream>
#include"Point.h"
#include"Circle.h"
#include"Line.h"
#include"Shape.h"
using namespace std;

void main()
{
	Shape* shapes[3];       //declare an array of 3 pointers to Point variable
shapes[0]=new Shape;      //assign shapes[0] to be a pointer to a Shape variable
shapes[1]=new Point;     //assign shapes[1] to be a pointer to a Point variable
shapes[2]=new Line;      //assign shapes[2] to be a pointer to a Line variable
for (int i=0; i!=3; i++) delete shapes[i];    //iterate and delete each shapes pointer

//before the base Shape class destructor ~Shape() is declared virtual, only the base class 
//Shape destructors are called because shapes[3] are pointers of Shape type. after virtual ~Shape()
// is declared, the derived class destructors as well as the base Shape class destructor are called.

system("PAUSE");

}
