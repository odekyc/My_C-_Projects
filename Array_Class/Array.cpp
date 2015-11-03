#include"Array.h"
#include"Point.h"
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

Array::Array()
{
	//default constructor
}

Array::Array(int tempsize)
{
	  //constructor with one integer parameter passing the size of the Array 

	m_data= new Point[tempsize];         //creates m_data to be an array of Point pointers of size=tempsize
}

Array::Array(Point *pp)
{
	m_data=pp;                     //constructor that use Point pointer pp as parameter and assigns m_data as pp
}


Array::~Array()
{        //destructor of array
}


int Array:: Size(int tempsize)
{
	size=tempsize;
	                  // setter and getter of size of array
	return size;
	
}

void Array:: SetElement(double tempx, double tempy)
{
	    double j=12.5;
		double h=16.9;
	                                            //set elements of array
	
	for(int i=0; i<size ; i++)
	{
		
		

		 Point temp(tempx+j, tempy+h);

		 m_data[i]=temp;

		j+=9.4;
		h+=7.3;
	}
}

void Array :: GetElement()
{                                                            //get element of array and cout the array element
	for(int i=0; i<size ; i++)
	{
		cout<<"m_data["<<i<<"] : "<<m_data[i].ToString()<<endl;
	}
}

Point& Array :: operator [] (int index)
{    
	if ( index>=size)                            //operator [] member function of array
	{
		return m_data[0];
	}
	else
	{
	return m_data[index];
	}}


const Point& Array:: operator [] (int index) const   // const operator [] member function of array
{
	if ( index>=size)
	{
		return m[0];
	}
	else
	{
	return m[index];
	
	}}






Point* Array :: operator = (const Point* source) // Assignment operator.
{ 
     for(int k=0; k<size; k++)
	 {
		       m_data[k]=source[k];
	 }

	 return m_data;
}