#include<iostream>
#include"Array.h"
#include"Point.h"
#include<cmath>

void main()
{
	using namespace std;
	int size;           //declare an integer called size
	double startx,starty;         //declare two double numbers
	

	

	cout<<"Enter the size(an integer) of the array of Points :"<<endl;
    cin>>size;        //enter the size
	
	

	 Array m(size);        //creates an Array variable called m of size

	 m.Size(size);            //sets the size of Array m

	 cout<<"Enter a start value x coordinate : "<<endl;
	 cin>>startx;                 //user input of a start x-coordinate
	 cout<<"Enter a start value y coordinate : "<<endl;
	 cin>>starty;               //user input of a start y-coordinate

	

	 m.SetElement(startx, starty);             //using the user input startx and starty to set element of array m

	 m.GetElement();                     //get element of array m

	

	 system("PAUSE");

 

}     