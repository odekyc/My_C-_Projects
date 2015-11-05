#ifndef Array_HPP
#define Array_HPP


#include "Point.h"
#include<iostream>
#include"OutOfBoundsExceptions.h"
using namespace std;

class Array
{
private:
	int size;
	Point* m_data;                                //create the private data members
	const Point* m;
	Point start, end;
	int index;
	double tempx, tempy;
	

public:
	Array();                          // default constructor
	Array( int tempsize);               //constructor that creates the private data member m_data to be an array of tempsize number of elements
	Array(Point *pp);                   //copy constructor
	~Array();                      //destructor
	Array& operator = (const Array& source);             //assignment operator for the Array
	int Size(int tempsize);                           //returns the size of the number of elements in the Array
	void SetElement(double tempx, double tempy);         //SetElement() member function  
	void SetMyIndex( int tempindex);
	void GetElement();                  //GetElement() member function
	Point& operator [] (int& tempindex);        //index operator member function for Array
	
	
};

#endif