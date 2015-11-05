#ifndef Shape_HPP
#define Shape_HPP

#include <iostream>
#include<sstream>
using namespace std;

class Shape
{
private:
     int m_id;
public:
	Shape();      //default constructor 
	Shape( Shape& source);            //copy constructor
	~Shape();           //destructor
	Shape& operator = (const Shape& source);   //assingment operator for the Shape variable
	int ID();        //returns ID of the Shape variable
	virtual string ToString();     //virtual ToString function overriden by derived class ToString()
	friend ostream& operator << (ostream& os,  Shape p);        //<< opeartor for Shape variable











};

#endif
