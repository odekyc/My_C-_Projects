#include<iostream>
#include"Point.hpp"
#include<sstream>
#include<string>

void main()
{
	Point pt1;

     double x1,y1;

	 cout<<"Enter the x coordinate(with decimal numbers) : "<<endl;
	 cin>>x1;
	 cout<<"Enter the y coordinate ( with decimal numbers): "<<endl;
	 cin>>y1;

	 pt1.SetX(x1);
	 pt1.SetY(y1);

	 cout<<"The value of X : "<< pt1.GetX()<<endl;
	 cout<<"The value of Y : "<< pt1.GetY()<<endl;

	 pt1.ToString();

	 system("PAUSE");
}