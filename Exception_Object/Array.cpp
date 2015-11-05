#include"Array.h"
#include"Point.h"
#include"OutOfBoundsExceptions.h"
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

Array::Array()
{                       //default constructor for Array object
	
}

Array::Array(int tempsize)
{
	                                // constructor for Array object with the size of the number of elements in the Array object passed in the arguement. would create an Array of the number of Point elements as the number passed in the arguement

	m_data= new Point[tempsize];
}

Array::Array(Point *pp)               //copy constructor of the Array
{
	m_data=pp;
}


Array::~Array()             //destructor of Array
{
}


int Array:: Size(int tempsize)            // member function of Array that would set the private data member size as the value of the integer passed in the arguement of this member function
{
	size=tempsize;

	return size;	
}

void Array:: SetElement(double temppx, double temppy)             
{ 
	    tempx=temppx;                    // assign the two double numbers passed in the arguement to the private data members tempx and tempy
		tempy=temppy;
		
		if( index>=size || index<0)          // if the index private data member is out of bound( e.g. smaller than 0 or equal or bigger than size of the number of elements of the Array object created
		{
		    throw OutOfBoundsExceptions (index);      
			                      // throw an exception of OutOfBoundsExceptions type
		}
		else
		{

			                               //else, if the index private data member is within bound, would create a Point and assign m_data[index] element to this Point created
		 Point temp(tempx, tempy);

		 m_data[index]=temp;

		tempx+=9.4;                          // at the end of the member function, increment the value of private data member tempx by 9.4, and the value of tempy by 7.3
		tempy+=7.3;
	}
}

void Array :: GetElement()                 //GetElement() member function code
{       
	    if ( index>=size || index<0)          //// if the index private data member is out of bound( e.g. smaller than 0 or equal or bigger than size of the number of elements of the Array object created
		                                  // throw an exception of OutOfBoundsExceptions type
			throw OutOfBoundsExceptions(index);      
			     

		else

	
		cout<<"m_data["<<index<<"] : "<<m_data[index].ToString()<<endl;
	// if index within bound, print onto screen m_data[index].ToString()
}

Point& Array :: operator [] (int& tempindex)
{                                                 // setting the index operator []
	index=tempindex;
	  //assign tempindex integer value passed in the arguement to the private data member index
	if (tempindex>=size || index<0)
	{                
		m_data[tempindex];// if index out of bound, throw an OutOfBoundsExceptions type exception
		throw OutOfBoundsExceptions (tempindex);      
			       
	}
	else
	{                                   //else, the [] operator member function would return m_data[index]
	return m_data[tempindex];
	}

    

}

void Array:: SetMyIndex( int tempindex)
{
	index=tempindex;
}







Array& Array :: operator = (const Array& source) // Assignment operator.
{ 
     for(int k=0; k<size; k++)                 //for loop will reiterate size number of times
	 {
		       m_data[k]=source.m_data[k];         //set the kth element of private data member m_data the Point value of the kth element of the source Array passed in the arguement
	 }

	 return *this;             //return the private data member of array of pointers m_data
}