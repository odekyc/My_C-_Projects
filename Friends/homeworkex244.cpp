#include "Point.h"
#include "Line.h"
#include <iostream>
#include<sstream>
using namespace std;

void main()
{
    Point D(1.5, 9.87);              // call constructor to create Point D

	cout<<"Point D is : "<<endl;
   cout<<D<<endl;
	
	Point start(2.3, 8.7);
	Point end(4.5, 98);          // call constructor to create two points called start and end

	Line L(start, end);            // using start and end points as arguements, call constructor to create a line variable named L

    cout<<"Line L has, starting and end points: \n";                              // create a string variable named temp2 using L.ToString();
	cout<< L<<endl;                 // output the temp2 string using the << operator we created
	system("PAUSE");

}