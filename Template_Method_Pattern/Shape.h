#ifndef Shape_HPP
#define Shape_HPP

#include <iostream>
#include<sstream>
using namespace std;

class Shape
{
private:
     int m_id;         // private data member of integer m_id
public:
	Shape();         // default constructor
	Shape( Shape& source);     //copy constructor
	~Shape();              //destructor
	Shape& operator = (const Shape& source);     //assignment operator of Shape base class
	int ID();               // member function that returns ID of Shape variable
	virtual string ToString();      // ToString() that returns a string that is declared as virtual
	void Print();                  // Print() member function
	friend ostream& operator << (ostream& os, Shape p);           // operator << member function is declared as a friend function of Shape base class











};

#endif
