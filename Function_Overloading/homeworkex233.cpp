#include<iostream>
#include"DISTANCEANDPOINT.h"
#include<sstream>
#include<string>

void main()
{
	
	 
     double x1,y1;

	 cout<<"Enter the x coordinate(with decimal numbers) : "<<endl;
	 cin>>x1;
	 cout<<"Enter the y coordinate ( with decimal numbers): "<<endl;
	 cin>>y1;

	Point pt1(x1,y1);


	 cout<<"The value of X : "<< pt1.X()<<endl;
	 cout<<"The value of Y : "<< pt1.Y()<<endl;

	 pt1.ToString();

	 cout<<"The distance of this point to the origin is :"<< pt1.Distance()<<endl;

     
	 double x2,y2;

	 cout<<"Enter the x coordinate of the second point : "<<endl;
	 cin>> x2;
	 cout<<"Enter the y coordinate of the second point : "<<endl;
	 cin>> y2;

	 Point pt2(x2,y2);
	

	 cout<<"The distance between the first point and the second point is : " << pt1.Distance(pt2)<<endl;

	 Point pt3(pt1);

	cout<<"The x and y coordinates of pt3 is : ";
	pt3.ToString();
	cout<<endl;
	


	double x4, y4;
	cout<<"Now enter the x coordinate of point pt4 "<<endl;
	cin>>x4;
	cout<<"Now enter the y coordinate of point pt4 "<<endl;
	cin>>y4;

	Point pt4(x4,y4);
		
	cout<<"The x coordinate of Point pt4 is "<<pt4.X()<<endl;
	cout<<"The y coordinate of Point pt4 is "<<pt4.Y()<<endl;

	 system("PAUSE");


}