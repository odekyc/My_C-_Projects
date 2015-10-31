#include "Point.h"
#include<iostream>
using namespace std;

void main()
{
	Point m;       //creates a Point variable called m

	m.SetX(6.57);      //set the X-coordinate of m as 6.57

	cout<<"The X-coordinate I set for Point m is : "<<m.GetX()<<endl;       //get the X-coordinate for Point m

	system("PAUSE");

}