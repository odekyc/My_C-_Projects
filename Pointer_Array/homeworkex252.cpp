#include <iostream>
#include"Point.h"
#include <string>

void main()
{
	using namespace std;

	//Point myarray[5]; an array of points created this way will make use of default constructors to create points
// when creating an array of pointer-to-Points, each element in the array must be created separately, but can be created with other
	//constructors than the default constructors

	Point* pp;            //create a pointer to Point variable called pp
	pp = new Point[3];       //pp is a pointer to Point array of size 3

	pp[0]=Point(3.6, 6.8);                //set pp elements
	pp[1]=Point(4.9, 8.76);
	pp[2]=Point(9.45, 83.987);

	for(int i=0; i<3; i++)        //for loop condition
	{
		cout<<pp[i]<<endl;        //cout pp[i]
		
	}

	
	//delete the pp Point pointer array
	delete [] pp;


	


		
	
	system("PAUSE");
}