#ifndef Shape_HPP
#define Shape_HPP

#include <iostream>
#include<sstream>
using namespace std;

class Shape
{
private:
     int m_id;           //private data member called m_id
	 friend ostream& operator << (ostream& os, Shape& p);     // make the << operator a friend member function of Shape base class
public:
	Shape();     //default constructor for Shape base class
	Shape( Shape& source);        //copy constructor for Shape base class
	~Shape();         //destructor for Shape base class
	Shape& operator = (const Shape& source);     //assignment operator for Shape base class
	int ID();      //returns the ID of the Shape variable
	virtual void Draw()=0;      // Draw() for the Shape base class, given no implementation since Shape is an abstract class without any concrete shape like Line or Point or Circle
	virtual string ToString();    // declare the base class Shape's ToString() member function as virtual 
	

};

#endif
