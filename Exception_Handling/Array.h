#ifndef Array_HPP
#define Array_HPP


#include "Point.h"
#include<iostream>
using namespace std;

class Array                //declare a class Array
{
private:
	int size;                         //set the private data members
	Point* m_data;
	const Point* m;
	Point start, end;
	int index;
	double tempx;
	double tempy;
	

public:
	Array();     //default constructor
	Array( int tempsize);           //constructor for an array of Points with tempsize that is passed as arguement as the number of elements
	Array(Point *pp);         //copy constructor
	~Array();       //destructor
	Point* operator = (const Point* source);            //assignment operator for each Point element
	int Size(int tempsize);          //return the size or number of Point elements in your array object
	void SetElement(double temppx, double temppy);          //SetElement member function

	void GetElement();                 //GetElement member function
	Point& operator [] (int index);                //index operator member function
	const Point& operator [] (int index) const;        //constant index operator member function
};

#endif