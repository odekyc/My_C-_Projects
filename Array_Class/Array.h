#ifndef Array_HPP
#define Array_HPP


#include "Point.h"
#include<iostream>
using namespace std;

class Array
{
private:   //declare the private variables
	int size;
	Point* m_data;
	const Point* m;
	Point start, end;

public:
	Array();   //default constructor
	Array( int tempsize);    //constructor with one parameter that sets size of array
	Array(Point *pp);      // constructor with one parameter of pointer to a Point
	~Array();     //destructor
	Point* operator = (const Point* source);             // assingment operator member function
	int Size(int tempsize);      //setter and getter of size of array
	void SetElement(double tempx, double tempy);        //set array element

	void GetElement();            //get element of the array
	Point& operator [] (int index);            //[] operator member function
	const Point& operator [] (int index) const;       //const [] operator member function
};

#endif