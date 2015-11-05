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
	Shape();           //default constructor
	Shape( Shape& source);         //copy constructor
	~Shape();            //destructor
	Shape& operator = (const Shape& source);        //assignment operator that assigns a Shape variable source to the current Shape varialbe
	int ID();      //returns the ID of the Shape variable
	string ToString();    //create a string that shows the ID for the base shape class
	friend ostream& operator << (ostream& os, Shape p);        //define base class << operator for Shape base class











};





#endif