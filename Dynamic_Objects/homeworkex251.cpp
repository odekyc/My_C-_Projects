#include<iostream>
#include"Point.h"
#include<string>
void main()
{
	using namespace std;
    Point* p1;                         //declare a pointer-to-Point variable called p1 on the heap
    
 
    p1 = new Point (203,9.876);       // set p1 as the pointer to the Point (203,9.876)
    Point* p2 = new Point (*p1);        //declare a pointer-to-Point variable called p2 to the same Point as p1

	cout<<*p1;     //cout the value of pointer p1

	delete p1;                   //delete p1 then p2
	delete p2;

	Point* p3;                 //declare a pointer-to-Point variable called p3 on the heap
	p3= new Point();        //set p3 to the origin using default Point constructor

	Point* p4= new Point(*p3);         //declare a pointer-to-Point variable called p4 to the same Point as p3

	double distance= p2->Distance(*p4);
	 //find the distance bewtween p2 and p4
	cout<<distance<<endl;
	//cout distance
	delete p3;             //delete p3 and p4
	delete p4;

	int size;      //declare an integer name size

	cout<<"Enter the size of the array of points"<<endl;           
	cin>>size;         //user entered size

	Point* pp;                         //declare a pointer to Point called pp
	pp = new Point[size];            //set pp as an array of Points of size

	pp[0]=Point();            //set pp[0] as origin

	cout<<pp[0];           //cout pp[0]

	double x=2.5;                      //initializes two double variables
		double y=1.9;

	for(int i=1; i<size; i++)            //for loop condition
	{
		

		pp[i]=Point(x,y);              //set element of pp[i]
		cout<<pp[i];
		x+=5.9;                        //increase x and y values
		y+=2.1;

	}

    

	delete [] pp;                     //delete pp array


	 system("PAUSE");

}