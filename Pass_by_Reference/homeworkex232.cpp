#include<iostream>
#include"DISTANCEANDPOINT.h"
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

	 cout<<"The distance of this point to the origin is :"<< pt1.DistanceOrigin()<<endl;

     Point pt2;
	 double x2,y2;

	 cout<<"Enter the x coordinate of the second point : "<<endl;
	 cin>> x2;
	 cout<<"Enter the y coordinate of the second point : "<<endl;
	 cin>> y2;


	 pt2.SetX(x2);
	 pt2.SetY(y2);

	 pt2.GetX();
	 pt2.GetY();

	 cout<<"The distance between the first point and the second point is : " << pt1.Distance(pt2)<<endl;

	 Point pt3(pt1);

	cout<<"The x coordinate of pt3 is "<< pt3.GetX()<<endl;
	cout<<"The y coordinate of pt3 is"<<pt3.GetY()<<endl;


	double x4, y4;
	cout<<"Now enter the x coordinate of point pt4 "<<endl;
	cin>>x4;
	cout<<"Now enter the y coordinate of point pt4 "<<endl;
	cin>>y4;

	Point pt4(x4,y4);
		
	cout<<"The x coordinate of Point pt4 is "<<pt4.GetX()<<endl;
	cout<<"The y coordinate of Point pt4 is "<<pt4.GetY()<<endl;

	 system("PAUSE");


}