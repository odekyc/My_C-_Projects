#include"Point.h"
#include"Line.h"
#include"Shape.h"
#include"Circle.h"
#include<iostream>
using namespace std;

void main()
{
	Point m(1.05,9.8);          //create a Point variable m with the given coordinates

	Line l(Point(5.3,9.7), Point(9.4, 2.6));       //create a Line variable called l with the given Point coordinates

	cout<<m.ToString()<<endl;              // cout the m.ToString(), turns out the Point derived class ToString() is called, with ID of Point m printed
	//due to calling of base class Shape ToString() in Point class ToString() member function
	cout<<l.ToString()<<endl;            // cout the l.ToString(), turns out the Line derived class ToString() is called, with ID of Point l printed
	//due to calling of base class Shape ToString() in Line class ToString() member function

	system("PAUSE");



}