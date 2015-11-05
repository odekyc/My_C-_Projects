#include"OutOfBoundsExceptions.h"

OutOfBoundsExceptions::OutOfBoundsExceptions(int tempindex)
{
	m_index=tempindex;
}
//constructor for OutOfBoundsExceptions variable with the integer passed in the arguement assigned to be the value of the m_index


OutOfBoundsExceptions::~OutOfBoundsExceptions()
{
}
//destructor

string OutOfBoundsExceptions:: GetMessage()            //GetMessage() member function for derived class OutOfBoundsExceptions
{
	stringstream ss;
	ss<<"Out of bounds index error for the 11th   index number."<<endl;               //create a stringstream variable ss and assigns this line of code to be the content of ss
	string mystr= ss.str();                          // create a string named mystr and assigns the content of ss to this string
	return mystr;                      // return mystr
}


