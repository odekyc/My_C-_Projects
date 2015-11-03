#include<iostream>
#include"namespaceELVA.h"
#include<string>
#include<sstream>
using namespace std;

void main()
{
	using ELVA::CAD::Point;    //using namespace 
	
	
	// create a Point variable called mypoint with coordinates (2.36, 9.87)
	Point mypoint(2.36, 9.87);

	cout<<"The X-coordinate for the point : "<<mypoint.GetX()<<endl;      //get the X-coordinate and output it onto screen

	 cout<<"The Y-coordinate for the point : "<<mypoint.GetY()<<endl;     //get the Y-coordinate and output it onto screen

	string mine=mypoint.ToString1();         //initialize a string variable named mine and assigns it to the string mypoint.ToString()

	cout<<mine<<endl;   //cout the value of mine onto screen


	//using namespace
	using ELVA::CAD::Line;
	Point mypoint2(5.64, 9.87);       //create a Point variable named mypoint2 with coordinates (5.64, 9.87)
	Line line1( mypoint, mypoint2);    //create a Line variable named line1 and assign mypoint as its startPoint and mypoint2 as its endPoint
	Line line2(line1);         //create a Line variable named line2 and use copy constructor to assign it the content of line1

	string x=line2.ToString();  //create a string x and assign line2.ToString() to it

	cout<<"After using the constructor to create line 1 from two points, and using the copy constructor to create line2, line2 is : "<< x<<endl;


	using namespace ELVA::Containers;     //using namespace


	Array m(6);           //create an Array variable m with size 6

	m.Size(6);         //set the size of array m as 6
	m.SetElement(9.8, 10.6);       //set the elements of array m with 9.8 as startx and 10.6 as start y
	m.GetElement();     //get the elements of array m

	 namespace circle= ELVA::CAD;              //using namespace
	using namespace circle;
	Circle me(63.8);      //create a Circle variable called me with radius 63.8

	string x1=me.ToString2();          //create a string variable x1 and assigns to it me.ToString2()

	cout<<"The circle with radius 63.8\n"<<x1<<endl;



	system("PAUSE");
	

}