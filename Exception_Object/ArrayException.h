#ifndef ArrayException_HPP
#define ArrayException_HPP

#include <iostream>
#include<sstream>
#include<string>

using namespace std;

class ArrayException                   //base class ArrayException for derived class
{
public:
	ArrayException()                                //default constructor
	{

	}
	~ArrayException()                               //destructor
	{

	}
	virtual string GetMessage()=0;                  //declare a virtual member function GetMessage() and set its implementation to 0 in order to declare ArrayException as an abstract class

};




#endif 