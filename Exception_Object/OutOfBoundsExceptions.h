#ifndef OutOfBoundsExceptions_HPP
#define OutOfBoundsExceptions_HPP

#include <iostream>
#include<sstream>
#include<string>
#include"ArrayException.h"
using namespace std;

class OutOfBoundsExceptions: public ArrayException                  //declare class OutOfBoundsExceptions to be a public derived class of ArrayException
{
private:
	int m_index;          //private data member of index number
public:
	OutOfBoundsExceptions(int tempindex)           //constructor for OutOfBoundsExceptions variable with the integer passed in the arguement assigned to be the value of the m_index
	{
		m_index = tempindex;
	}
	~OutOfBoundsExceptions()                    //destructor
	{

	}
	string GetMessage()
	{
		stringstream ss;
		ss << "Out of bounds index error for the 11th index number." << endl;               //create a stringstream variable ss and assigns this line of code to be the content of ss
		string mystr = ss.str();                          // create a string named mystr and assigns the content of ss to this string
		return mystr;
	}
		                 // GetMessage() member function that returns a string as the message to be printed

};




#endif 